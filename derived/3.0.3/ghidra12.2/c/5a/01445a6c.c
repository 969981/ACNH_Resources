
void FUN_01445a6c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined4 local_50;
  float fStack_4c;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x01445b38;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01445b38;
    }
  }
  uVar10 = 0;
joined_r0x01445b38:
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3278);
    if ((((int)lVar6 == 1) && ((uVar4 & uVar10) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      if (((ulong)*(byte *)(param_1 + 0x3ac) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar7 = (undefined4 *)
                 (*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x3ac) * 4 + 0xde8);
      }
      else {
        puVar7 = (undefined4 *)PTR_DAT_04bb3238;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x68);
      uVar8 = *(undefined8 *)(lVar6 + 0x278);
      local_48 = *(undefined4 *)(lVar6 + 0x280);
      fStack_4c = (float)((ulong)uVar8 >> 0x20);
      _local_50 = CONCAT44(fStack_4c + 6.2,(int)uVar8);
      FUN_008ff4fc(plVar9,*puVar7,&local_50,0);
    }
  }
  return;
}

