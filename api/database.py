import sqlite3
import os

# Created and connet database 
conn = sqlite3.connect('nexus.db')
cur=conn.cursor()

sql_database = '''
    CREATE TABLE IF NOT EXISTS data(    
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        temp_value REAL NOT NULL,
        hum_value REAL NULL,
        status BOOLEAN DEFAULT true,
        created_at TIMESTAMP DEFAULT (datatime('now','localtime'))
        
    );
'''
cur.execute(sql_database)
conn.commit()
conn.close()