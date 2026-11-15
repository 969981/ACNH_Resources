
void FUN_0249bc88(long param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte bVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar5 = &DAT_05240280;
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "PlayerLongStickReadyWait";
  FUN_017029bc(puVar5,&local_58,6,0,0);
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37b0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar8 + 0x498))(plVar8,0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x190a);
  sVar2 = *(short *)(param_1 + 0x190e);
  iVar1 = *(int *)(param_1 + 0x1910);
  if (*(char *)(param_1 + 0x3a5) != '\0') {
    uVar3 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x398) = uVar3;
  }
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  local_48 = 0x3f800000;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar7);
  local_44 = 1;
  local_58 = (undefined *)CONCAT44((float)iVar4 * 0.001,(undefined4)local_58);
  local_50 = (char *)CONCAT44((float)iVar1 * 0.001,(float)(int)sVar2 * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}

