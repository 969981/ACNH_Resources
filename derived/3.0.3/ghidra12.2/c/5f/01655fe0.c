
void FUN_01655fe0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  puVar3 = PTR_DAT_04bb3350;
  nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = PTR_DAT_04bb2020;
  lVar10 = 1;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "GfxStaticModelShader";
  local_50 = puVar1;
  lVar5 = FUN_038c6d48(&LAB_03200000,&local_50,*(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x538),0,
                       1,0);
  if (lVar5 != 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    lVar10 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = lVar5;
  }
  pcStack_48 = "Shader/Park_UBER_All.Nin_NX_NVN.szs";
  local_50 = puVar1;
  plVar7 = (long *)FUN_03eba090(&local_50,lVar5,0x1000,0,1,0);
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar8 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bb2860);
  local_60 = puVar2 + 0x10;
  pcStack_58 = "Park_UBER_All.Nin_NX_NVN.bfsha";
  if ((uVar8 & 1) == 0) {
    plVar7 = (long *)0x0;
  }
  lVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_60,0);
  if (lVar6 != 0) {
    uVar9 = *(undefined8 *)(*(long *)PTR_DAT_04bb4e50 + 0x58);
    *(long *)(param_1 + 0x70) = lVar6;
    lVar6 = FUN_003a0970();
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar6 + 0x20);
    FUN_03ad2d00(param_1 + 0x50,lVar5,uVar9);
  }
  if (lVar10 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar10;
  }
  *(long *)(param_1 + 0x48) = lVar5;
  return;
}

