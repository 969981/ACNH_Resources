
void FUN_020d87d4(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_21;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  iVar3 = FUN_026b0f90();
  if (iVar3 == 0) {
    puVar4 = &DAT_05440cd8;
  }
  else {
    puVar4 = &DAT_05407648;
    uVar6 = (ulong)DAT_05407648;
    if (((uVar6 < 0x23) && (DAT_05407649 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(DAT_05407649 & 0x1f) & 1) != 0)) {
      puVar4 = &DAT_0541a878;
      uVar6 = (ulong)DAT_0541a878;
      if (((uVar6 < 0x23) && (DAT_0541a879 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(DAT_0541a879 & 0x1f) & 1) != 0)) {
        puVar4 = &DAT_0542daa8;
        uVar6 = (ulong)DAT_0542daa8;
        if (((uVar6 < 0x23) && (DAT_0542daa9 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(DAT_0542daa9 & 0x1f) & 1) != 0))
        goto LAB_020d88ac;
      }
    }
  }
  FUN_026b1890(puVar4,param_1);
LAB_020d88ac:
  if (*(int *)(param_1 + 0x13268) == 1) {
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar5 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar7 + 0x472) != bVar2)) {
        local_8 = 0;
        local_2 = 0;
        local_4 = 0xff01;
        if (DAT_053d0a10 < 0) {
          return;
        }
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0a10,&local_8,&uStack_21,1,0);
        return;
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar7 + 0x472);
      }
    }
    if (*pbVar5 < 8) {
      DAT_05453f08 = DAT_05453f08 & (1 << (ulong)(*pbVar5 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}

