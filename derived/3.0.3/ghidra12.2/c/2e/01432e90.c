
void FUN_01432e90(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *__src;
  long lVar5;
  undefined8 *__dest;
  long lVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x2cc);
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x2c8);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), lVar6 != 0)) {
        local_38 = lVar6;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x2f0);
  uVar4 = FUN_01ae6a98(&local_48);
  if (uVar4 < 0x14) {
    __src = (undefined8 *)(&PTR_s_FtrLoopAuto_0492bb40)[uVar4];
  }
  else {
    __src = &DAT_0407ebb1;
  }
  __dest = *(undefined8 **)(lVar6 + 0x1028);
  if (__dest != __src) {
    lVar5 = 0;
    do {
      if (*(char *)((long)__src + lVar5) == '\0') goto LAB_01432fdc;
      if (*(char *)((long)__src + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01432fdc;
      }
      if (*(char *)((long)__src + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01432fdc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01432fdc:
    iVar2 = *(int *)(lVar6 + 0x1030);
    iVar1 = (int)lVar5;
    if (iVar2 <= (int)lVar5) {
      iVar1 = iVar2 + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  return;
}

