
void FUN_0236ac64(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  byte local_58 [4];
  undefined8 local_54;
  undefined8 local_4c;
  undefined1 local_44;
  
  if (((*(int *)(param_1 + 0x178) == 0) && (*(long *)PTR_DAT_04bb4718 != 0)) &&
     ((ulong)*(byte *)(param_1 + 0x1ee8) < 8)) {
    *(undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_1 + 0x1ee8) * 4 + 0xea0) = 0;
  }
  local_58[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_58[0]) {
    local_58[0] = 0xff;
  }
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_58,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x17f68) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17f68), puVar8 == (undefined8 *)0x0)) {
      iVar6 = *(int *)(*(long *)(lVar7 + 0x17f50) + *(long *)(lVar7 + 0x17f48) + 0x18);
    }
    else {
      uVar9 = (**(code **)*puVar8)();
      iVar6 = *(int *)(*(long *)(lVar7 + 0x17f50) + *(long *)(lVar7 + 0x17f48) + 0x18);
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x17f68) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17f68) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
    *(bool *)(param_1 + 0x17dc) = iVar6 != 1;
  }
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar10 = FUN_0231eef4(param_1,puVar8 + 0x4f,0);
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)((long)puVar8 + 0x27c) = uVar10;
  FUN_023203ac(param_1,0,0);
  if (*(int *)(param_1 + 0x178) == 0) {
    cVar1 = *(char *)(param_1 + 0x1900);
    uVar2 = *(undefined1 *)(param_1 + 0x1901);
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar8 = &DAT_05240280;
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    uVar9 = FUN_0073d6e0(puVar8,0);
    if ((uVar9 & 1) == 0) {
      uVar3 = 6;
      if (cVar1 != '\0') {
        uVar3 = uVar2;
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
      FUN_0231ade8(param_1,uVar3);
    }
    FUN_0252be2c(param_1 + 0x1ee8);
    local_4c = 0x3dcccccd00000000;
    *(undefined8 *)(param_1 + 0x1834) = 0;
    puVar5 = PTR_DAT_04bb37e0;
    local_58[0] = *(byte *)(param_1 + 0x1ee8);
    *(undefined8 *)(param_1 + 0x1e90) = 0;
    *(undefined8 *)(param_1 + 0x1e88) = 0;
    *(undefined4 *)(param_1 + 0x183c) = 0;
    local_54 = 0;
    local_44 = 0;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xff7fffff;
    uVar2 = puVar5[2];
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
    uVar4 = *(undefined2 *)puVar5;
    *(undefined1 *)(param_1 + 0x1e9a) = uVar2;
    *(undefined2 *)(param_1 + 0x1e98) = uVar4;
    *(undefined2 *)(param_1 + 0x1ea0) = uVar4;
    uVar3 = puVar5[3];
    *(undefined1 *)(param_1 + 0x1e9b) = uVar3;
    uVar10 = *(undefined4 *)(puVar5 + 4);
    *(undefined1 *)(param_1 + 0x1ea2) = uVar2;
    *(undefined1 *)(param_1 + 0x1ea3) = uVar3;
    *(undefined4 *)(param_1 + 0x1e9c) = uVar10;
    *(undefined4 *)(param_1 + 0x1ea4) = uVar10;
    FUN_016fa230(*(undefined4 *)(param_1 + 0x388),local_58,*(undefined4 *)(param_1 + 0x230),1);
  }
  return;
}

