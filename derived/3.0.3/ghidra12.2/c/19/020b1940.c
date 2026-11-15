
void FUN_020b1940(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long *plVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  
  *(undefined8 *)(param_1 + 0xa60) = 0;
  *(undefined8 *)(param_1 + 0xa58) = 0;
  piVar1 = (int *)(param_1 + 0x196c0);
  *(undefined8 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined8 *)(param_1 + 0xa40) = 0;
  *(undefined8 *)(param_1 + 0xa38) = 0;
  *(undefined8 *)(param_1 + 0xa30) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xd20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  (**(code **)(**(long **)(param_1 + 0xb78) + 0x58))();
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(undefined4 *)(param_1 + 0xd80) = 0;
  *(undefined4 *)(param_1 + 0xcec) = 0;
  puVar6 = PTR_DAT_04bb6298;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
    puVar8 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
    iVar7 = FUN_006bd550(*puVar8,0);
    if (iVar7 == 0x758f7eaf) {
      uVar4 = *(ushort *)puVar6;
      uVar13 = (ulong)(short)uVar4;
      if (uVar13 != 0xffffffffffffffff) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
        if (0xff < (uint)(int)(short)uVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0xe & 1) == 0) {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
          if (0xff < uVar4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0xf & 1) == 0) goto LAB_020b1ad4;
        }
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
        if (0xff < uVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0x19 & 1) == 0) {
          FUN_020ea8b0(*(undefined8 *)PTR_DAT_04bb4760);
        }
      }
    }
  }
LAB_020b1ad4:
  *(undefined4 *)(param_1 + 0xd64) = 0;
  *(undefined4 *)(param_1 + 0xd80) = 0;
  FUN_01e28bb0(param_1 + 0xda0);
  plVar9 = *(long **)(param_1 + 0x2e60);
  while (plVar9 != (long *)(param_1 + 0x2e58)) {
    plVar3 = (long *)plVar9[1];
    plVar15 = plVar3;
    if (*plVar9 != 0) {
      *(long **)(*plVar9 + 8) = plVar3;
      plVar15 = (long *)plVar9[1];
    }
    if (plVar15 != (long *)0x0) {
      *plVar15 = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    *(int *)(param_1 + 0x2e68) = *(int *)(param_1 + 0x2e68) + -1;
    plVar9[-4] = *(long *)(param_1 + 0x2e70);
    *(long **)(param_1 + 0x2e70) = plVar9 + -4;
    plVar9 = plVar3;
  }
  if (0 < *piVar1) {
    lVar12 = 0;
    puVar8 = *(undefined8 **)(param_1 + 0x196d0);
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x196c8) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar14 = puVar8;
      *(undefined8 **)(param_1 + 0x196d0) = puVar14;
      puVar8 = puVar14;
    } while (lVar12 < *piVar1);
  }
  *piVar1 = 0;
  sVar5 = *(short *)puVar6;
  if (sVar5 != -1) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x17 & 1) == 0) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x175a0) == 0) {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        pvVar11 = malloc(0x1628);
      }
      else {
        plVar9 = *(long **)(param_1 + 0x17598);
        if (plVar9 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar12 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
        }
        pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1628,8);
      }
      FUN_02115470();
      *(void **)(param_1 + 0x175a0) = pvVar11;
    }
  }
  return;
}

