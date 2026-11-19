
void FUN_03ab3890(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  lVar5 = *(long *)(param_1 + 8);
  bVar3 = *(byte *)(param_3 + 8);
  uVar6 = (uint)bVar3;
  if ((((*(char *)(lVar5 + 0xa10) != '\0') && (*(char *)(lVar5 + 0x4d0) != '\0')) &&
      (*(char *)(lVar5 + 0x1660) == '\0')) &&
     ((*(uint *)(param_1 + 0x550) >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    uVar1 = uVar6;
    if (*(uint *)(param_1 + 0x478) <= uVar6) {
      uVar1 = 0;
    }
    FUN_03acb560(*(long *)(param_1 + 0x480) + (ulong)uVar1 * 0xfc8,param_2,*(long *)(param_3 + 0x18)
                 ,*(long *)(param_3 + 0x18) + 0xc0);
    uVar1 = uVar6;
    if (*(uint *)(param_1 + 0x478) <= uVar6) {
      uVar1 = 0;
    }
    if ((param_4 & 1) == 0) {
      FUN_03a10440(*(long *)(param_1 + 0x480) + (ulong)uVar1 * 0xfc8 + 0x380,param_2);
      puVar4 = PTR_DAT_04bbd510;
      uVar1 = uVar6;
      if (*(uint *)(param_1 + 0x478) <= uVar6) {
        uVar1 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x480) + (ulong)uVar1 * 0xfc8;
      if (*(long *)(lVar5 + 0x558) != 0) {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
        *(undefined8 *)(lVar5 + 0x558) = 0;
      }
      if (*(long *)(lVar5 + 0x640) != 0) {
        FUN_039499cc(*(undefined8 *)puVar4);
        *(undefined8 *)(lVar5 + 0x640) = 0;
      }
    }
    else {
      FUN_03a0f88c();
    }
  }
  iVar2 = *(int *)(param_1 + 0x15e0);
  if (iVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x15e8);
    iVar7 = 0;
    do {
      puVar8 = (uint *)(lVar5 + (long)iVar7 * 0x68);
      if ((*(long *)(puVar8 + 0xc) != 0) &&
         (0 < (int)(*(uint *)(*(long *)(puVar8 + 0xc) + 0x1a0) & 1 << (ulong)(bVar3 & 0x1f)))) {
        uVar1 = uVar6;
        if (*puVar8 < (uint)bVar3 || *puVar8 == uVar6) {
          uVar1 = 0;
        }
        FUN_03acb560(*(long *)(puVar8 + 2) + (ulong)uVar1 * 0xfc8,param_2,*(long *)(param_3 + 0x18),
                     *(long *)(param_3 + 0x18) + 0xc0);
        uVar1 = uVar6;
        if (*puVar8 <= uVar6) {
          uVar1 = 0;
        }
        FUN_03a0f88c(*(long *)(puVar8 + 2) + (ulong)uVar1 * 0xfc8 + 0x380);
      }
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  return;
}

