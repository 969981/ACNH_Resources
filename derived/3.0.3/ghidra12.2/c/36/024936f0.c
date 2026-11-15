
void FUN_024936f0(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  float local_34;
  
  local_34 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_3c = CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar4 + 0x338));
      iVar2 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar3 = 0;
    puVar5 = DAT_055c1b60;
    do {
      if (*(int *)(puVar5 + -1) == *(int *)(puVar6 + 7)) {
        if (((uVar3 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02493814;
        break;
      }
      puVar5 = (undefined8 *)puVar5[1];
      uVar3 = uVar3 + 1;
    } while (puVar5 != &DAT_055c1b58);
  }
  uVar3 = 0;
LAB_02493814:
  local_50 = (undefined *)(CONCAT44(local_50._4_4_,uVar3) & 0xffffffff0000ffff);
  local_50._0_5_ = CONCAT14(1,(float)local_50);
  uVar7 = FUN_016e06d0(0,&local_3c,0,0,&local_50,0);
  local_3c = CONCAT44(uVar7,(undefined4)local_3c);
  local_40 = 1;
  local_50 = (undefined *)CONCAT44(uVar7,(undefined4)local_3c);
  local_48._0_4_ = local_34;
  local_48._4_4_ = 0x101;
  FUN_016dec40(param_1,&local_50,1,1,0,0,1);
  local_3c = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_50._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_50._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar6,&local_50,&local_3c);
  uVar7 = FUN_006f0400((float)*(int *)(param_1 + 0x1900) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       (float)*(int *)(param_1 + 0x1906) * 0.001 -
                       *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  local_3c = CONCAT44(local_3c._4_4_,uVar7);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_50 = (undefined *)((ulong)(uint)local_50._4_4_ << 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar6,&local_3c,&local_50);
  cVar1 = *(char *)(param_1 + 0x191a);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  if (cVar1 == '\0') {
    local_48 = "PlayerLinecarReadyWait";
  }
  else {
    local_48 = "PlayerLinecarDeleteReadyWait";
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar6,&local_50,6,1,0);
  return;
}

