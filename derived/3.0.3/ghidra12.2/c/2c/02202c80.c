
void FUN_02202c80(undefined1 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  if (plVar4 == (long *)0x0) {
LAB_02202cfc:
    *param_1 = DAT_05454144;
    param_1[1] = DAT_05454145;
    uVar3 = FUN_020fd7d8(&DAT_05454144);
    param_1[2] = uVar3;
    *(undefined4 *)(param_1 + 4) = DAT_05454148;
    param_1[0x18] = DAT_0545415c;
    param_1[8] = DAT_0545414c;
    param_1[9] = DAT_0545414d;
    uVar3 = FUN_020fd7d8();
    param_1[10] = uVar3;
    *(undefined4 *)(param_1 + 0xc) = DAT_05454150;
    param_1[0x19] = DAT_0545415d;
    param_1[0x10] = DAT_05454154;
    param_1[0x11] = DAT_05454155;
    uVar3 = FUN_020fd7d8(&DAT_05454154);
    param_1[0x12] = uVar3;
    *(undefined4 *)(param_1 + 0x14) = DAT_05454158;
    param_1[0x1a] = DAT_0545415e;
    return;
  }
  lVar5 = *plVar4;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar5 + 0x472) != bVar2)) &&
       ((plVar4[5] == 0 || ((int)plVar4[0x10] != 1)))) goto LAB_02202cfc;
  }
  FUN_020eb86c(param_1);
  return;
}

