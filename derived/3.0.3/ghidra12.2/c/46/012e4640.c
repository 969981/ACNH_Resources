
void FUN_012e4640(long param_1,undefined8 *param_2)

{
  uint uVar1;
  size_t __size;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar16;
  undefined8 *puVar15;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*(char *)(param_2 + 1) != '\0') {
    plVar12 = (long *)*param_2;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      plVar8 = malloc(0x18);
    }
    else {
      plVar8 = plVar12;
      if (plVar12 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar14 = (undefined8 *)(lVar13 + 8);
        if (lVar7 != 0) {
          puVar14 = (undefined8 *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*puVar14;
      }
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x18,8);
    }
    plVar8[2] = 0;
    *plVar8 = (long)(PTR_DAT_04bbc190 + 0x10);
    plVar8[1] = 0;
    puVar14 = (undefined8 *)(param_1 + 0x28);
    *(long **)(param_1 + 0x18) = plVar8;
    plVar9 = (long *)(**(code **)*puVar14)(puVar14);
    uVar3 = (**(code **)(*plVar9 + 0x18))();
    plVar9 = (long *)(**(code **)*puVar14)(puVar14);
    uVar4 = (**(code **)(*plVar9 + 0x20))();
    FUN_012e16c0(plVar8,plVar12,uVar3,uVar4);
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    iVar5 = (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    iVar6 = (**(code **)(*plVar8 + 0x20))();
    *(int *)(param_1 + 0x1cc) = iVar6;
    *(int *)(param_1 + 0x1c8) = iVar5;
    FUN_03856c54(param_1 + 0x1b8,iVar6 * iVar5,plVar12);
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    uVar3 = (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    uVar4 = (**(code **)(*plVar8 + 0x20))();
    FUN_012e9810(param_1 + 0x128,plVar12,uVar3,uVar4);
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    uVar10 = (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    uVar11 = (**(code **)(*plVar8 + 0x20))();
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "ItemLayerWorkHeap";
    plVar12 = (long *)FUN_038c6d48((uVar10 & 0xffffffff) * (uVar11 & 0xffffffff) * 8 + 0x200,
                                   &local_70,plVar12,8,1,0);
    *(long **)(param_1 + 0xd0) = plVar12;
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    iVar5 = (**(code **)(*plVar8 + 0x18))();
    plVar8 = (long *)(**(code **)*puVar14)(puVar14);
    iVar6 = (**(code **)(*plVar8 + 0x20))();
    if (plVar12 != (long *)0x0) {
      uVar1 = iVar6 * iVar5;
      if (0 < (int)uVar1) {
        __size = (ulong)uVar1 << 3;
        if (*(long *)puVar2 == 0) {
          puVar14 = malloc(__size);
        }
        else {
          puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
        }
        if (puVar14 != (undefined8 *)0x0) {
          puVar15 = puVar14;
          do {
            puVar16 = puVar15 + 1;
            *puVar15 = 0xfffe;
            FUN_0277d4ac(puVar15);
            puVar15 = puVar16;
          } while (puVar16 != puVar14 + uVar1);
          *(uint *)(param_1 + 0xe8) = uVar1;
          *(undefined8 **)(param_1 + 0xf0) = puVar14;
        }
      }
      *(int *)(param_1 + 0xe0) = iVar5;
      *(int *)(param_1 + 0xe4) = iVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x1c);
  puVar2 = PTR_DAT_04bbc188;
  lVar13 = *(long *)(param_1 + 0x18);
  if (lVar13 != 0) {
    uVar1 = *(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 8);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      if (uVar1 != 1) {
        do {
          lVar7 = uVar10 * 4;
          uVar10 = uVar10 + 2;
          *(undefined4 *)(*(long *)(lVar13 + 0x10) + lVar7) = *(undefined4 *)puVar2;
          *(undefined4 *)(*(long *)(lVar13 + 0x10) + lVar7 + 4) = *(undefined4 *)puVar2;
        } while (((ulong)uVar1 & 0xfffffffe) != uVar10);
      }
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)(*(long *)(lVar13 + 0x10) + uVar10 * 4) = *(undefined4 *)puVar2;
      }
    }
  }
  return;
}

