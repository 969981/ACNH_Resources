
void FUN_0240e8c8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  float *pfVar5;
  byte bVar6;
  float fVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  uStack_40 = "PlayerJumpValley";
  FUN_017029bc(puVar3,&local_48,6,0,0);
  *(undefined8 *)(param_1 + 0x398) = 0;
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x32;
  local_38 = 0x3f800000;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar6);
  local_34 = 1;
  local_48 = (undefined *)CONCAT44((float)*(int *)(param_1 + 0x190a) * 0.001,(undefined4)local_48);
  uStack_40 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1910) * 0.001,
                               (float)(int)*(short *)(param_1 + 0x190e) * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_48,*(undefined4 *)(param_1 + 0x230),1);
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined8 *)(param_1 + 0x694) = 0;
  *(undefined4 *)(param_1 + 0x1820) = 0;
  *(undefined8 *)(param_1 + 0x1828) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x1830) = 0;
  lVar1 = *(long *)(param_1 + 0x68) + 0x278;
  lVar4 = FUN_0251e98c(1);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar4 + 0x2a0) + 0xf0))(lVar4 + 0x2a0);
  fVar7 = *pfVar5;
  FUN_01261e40(fVar7 * 0.75,PTR_DAT_04bb5dc0,lVar1,0,0);
  FUN_01261e40(fVar7 * 0.75,PTR_DAT_04bbcd38,lVar1,0,1);
  return;
}

