
uint FUN_01240cd0(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((&DAT_04102ef8)[param_1 & 3] == '\x02') {
    uVar3 = 1;
  }
  else if ((&DAT_04102ef8)[param_1 & 3] == '\x01') {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5;
    DAT_05582b78 = DAT_05582b7c;
    uVar3 = (uVar5 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f;
    DAT_05582b7c = uVar5 ^ DAT_05582b7c;
  }
  else {
    uVar3 = 0;
  }
  if ((&DAT_04102ef8)[param_2 & 3] == '\x02') {
    uVar3 = uVar3 + 1;
  }
  else if ((&DAT_04102ef8)[param_2 & 3] == '\x01') {
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar5 = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5;
    DAT_05582b78 = DAT_05582b7c;
    uVar3 = uVar3 - ((int)(uVar5 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f);
    DAT_05582b7c = uVar5 ^ DAT_05582b7c;
  }
  if ((&DAT_04102ef8)[param_1 >> 2 & 3] == '\x02') {
    uVar5 = 1;
  }
  else if ((&DAT_04102ef8)[param_1 >> 2 & 3] == '\x01') {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6;
    DAT_05582b78 = DAT_05582b7c;
    uVar5 = (uVar6 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f;
    DAT_05582b7c = uVar6 ^ DAT_05582b7c;
  }
  else {
    uVar5 = 0;
  }
  if ((&DAT_04102ef8)[param_2 >> 2 & 3] == '\x02') {
    uVar5 = uVar5 + 1;
  }
  else if ((&DAT_04102ef8)[param_2 >> 2 & 3] == '\x01') {
    uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar6 = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6;
    DAT_05582b78 = DAT_05582b7c;
    uVar5 = uVar5 - ((int)(uVar6 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f);
    DAT_05582b7c = uVar6 ^ DAT_05582b7c;
  }
  if ((&DAT_04102ef8)[param_1 >> 4 & 3] == '\x02') {
    uVar6 = 1;
  }
  else if ((&DAT_04102ef8)[param_1 >> 4 & 3] == '\x01') {
    uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1;
    DAT_05582b78 = DAT_05582b7c;
    uVar6 = (uVar1 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f;
    DAT_05582b7c = uVar1 ^ DAT_05582b7c;
  }
  else {
    uVar6 = 0;
  }
  if ((&DAT_04102ef8)[param_2 >> 4 & 3] == '\x02') {
    uVar6 = uVar6 + 1;
  }
  else if ((&DAT_04102ef8)[param_2 >> 4 & 3] == '\x01') {
    uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1;
    DAT_05582b78 = DAT_05582b7c;
    uVar6 = uVar6 - ((int)(uVar1 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f);
    DAT_05582b7c = uVar1 ^ DAT_05582b7c;
  }
  uVar1 = DAT_05582b7c;
  if ((&DAT_04102ef8)[param_1 >> 6 & 3] == '\x02') {
    uVar4 = 1;
  }
  else if ((&DAT_04102ef8)[param_1 >> 6 & 3] == '\x01') {
    uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1;
    uVar4 = (uVar1 ^ DAT_05582b7c ^ 0xffffffff) >> 0x1f;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    uVar1 = uVar1 ^ DAT_05582b7c;
  }
  else {
    uVar4 = 0;
  }
  DAT_05582b7c = uVar1;
  if ((&DAT_04102ef8)[param_2 >> 6 & 3] == '\x02') {
    uVar4 = uVar4 + 1;
  }
  else if ((&DAT_04102ef8)[param_2 >> 6 & 3] == '\x01') {
    uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2;
    DAT_05582b7c = uVar2 ^ uVar1;
    uVar4 = uVar4 - ((int)(uVar2 ^ uVar1 ^ 0xffffffff) >> 0x1f);
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = uVar1;
  }
  return (uint)(byte)(&DAT_041749e0)[uVar3] |
         ((uint)(byte)(&DAT_041749e0)[uVar6] << 2 | (uint)(byte)(&DAT_041749e0)[uVar4] << 4 |
         (uint)(byte)(&DAT_041749e0)[uVar5]) << 2;
}

