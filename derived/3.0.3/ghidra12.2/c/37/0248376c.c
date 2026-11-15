
void FUN_0248376c(long param_1)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined2 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined4 local_44;
  undefined8 local_40;
  char *pcStack_38;
  
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerChangeStickSelectSet";
  FUN_017029bc(puVar8,&local_40,6,0,0);
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  local_44 = *(undefined4 *)(param_1 + 0x230);
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      uVar6 = 0;
      goto LAB_02483850;
    }
  }
  FUN_016f742c(&local_40,&local_44,0);
  uVar6 = local_40._2_2_;
LAB_02483850:
  *(undefined2 *)(param_1 + 0x1900) = uVar6;
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar7);
  lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
  if (lVar5 == 0) {
    iVar4 = -1;
  }
  else {
    if ((*(long **)(lVar5 + 0x161a8) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar5 + 0x161a8), puVar8 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar8)();
      uVar3 = uVar3 ^ 1;
    }
    bVar7 = *(byte *)(*(long *)(lVar5 + 0x16190) + *(long *)(lVar5 + 0x16188));
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    iVar4 = (int)(char)bVar7;
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x161a8) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x161a8) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  *(int *)(param_1 + 0x848) = iVar4;
  if (*(long *)PTR_DAT_04bb7ff8 != 0) {
    FUN_02ef7b98(*(long *)PTR_DAT_04bb7ff8,0x3b,(byte *)(param_1 + 0x1ee8),0);
  }
  return;
}

