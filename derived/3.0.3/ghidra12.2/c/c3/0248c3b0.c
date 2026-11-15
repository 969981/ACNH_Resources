
void FUN_0248c3b0(long param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined1 auStack_40 [8];
  short local_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  FUN_0252d8f0(&local_38,param_1 + 0x1ee8);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      iVar3 = *(int *)(param_1 + 0x178);
      sVar2 = local_38;
      goto joined_r0x0248c474;
    }
  }
  FUN_0252d8f0(auStack_40,param_1 + 0x1ee8);
  FUN_01af3d60(&local_50,auStack_40,1);
  local_38 = (short)local_50;
  uStack_36 = (undefined2)((ulong)local_50 >> 0x10);
  iVar3 = *(int *)(param_1 + 0x178);
  uStack_34 = local_50._4_4_;
  sVar2 = local_38;
joined_r0x0248c474:
  if (iVar3 == 0) {
    *(ulong *)(param_1 + 0x190c) = CONCAT44(uStack_34,CONCAT22(uStack_36,sVar2));
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  local_38 = sVar2;
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "IsLastFence";
  if (((puVar6[0x227] != 0) && (lVar5 = *(long *)(puVar6[0x227] + 0x78), lVar5 != 0)) &&
     (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x38))(plVar4,&local_50,sVar2 == -2);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_50 = puVar1 + 0x10;
  pcStack_48 = "PlayerFenceMakerAction";
  FUN_017081d0(puVar6,&local_50,6,1,0);
  *(undefined1 *)(param_1 + 0x22ac) = 0;
  *(undefined8 *)(param_1 + 0x22b0) = 0;
  *(undefined8 *)(param_1 + 0x22b8) = 0;
  *(undefined8 *)(param_1 + 0x22c0) = 0;
  *(undefined4 *)(param_1 + 0x22c8) = 0xffffffff;
  return;
}

