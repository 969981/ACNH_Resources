
void FUN_01951890(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar9 = malloc(0x30);
joined_r0x01951908:
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0xe50) = pvVar9;
      *(undefined4 *)(param_1 + 0xe60) = 0;
      *(undefined8 *)(param_1 + 0xe58) = 0xc;
    }
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar8 = (long *)(lVar14 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x30,8);
      goto joined_r0x01951908;
    }
  }
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar14 = FUN_03775a30(&local_48);
  if (lVar14 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar14 + 0x108);
  if (lVar7 == 0) {
    uVar10 = 0;
LAB_019519c8:
    puVar15 = (undefined *)(*(long *)(lVar14 + 0xf0) + *(long *)(lVar14 + 0xe8) + 0x4848);
    puVar4 = local_48;
    lVar7 = local_40;
    goto LAB_01951a1c;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar10 = 0;
    plVar8 = *(long **)(lVar7 + 0x20);
    if (plVar8 != (long *)0x0) goto LAB_01951980;
LAB_019519e8:
    puVar15 = *(undefined **)(lVar14 + 0xe8) + *(long *)(lVar14 + 0xf0) + 0x4848;
    plVar8 = *(long **)(lVar7 + 0x20);
    puVar5 = *(undefined **)(lVar14 + 0xe8);
    lVar6 = *(long *)(lVar14 + 0xf0);
    puVar4 = local_48;
    lVar7 = local_40;
  }
  else {
    uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar14 + 0x108);
    uVar10 = uVar10 & 0xffffffff;
    if (lVar7 == 0) goto LAB_019519c8;
    plVar8 = *(long **)(lVar7 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_019519e8;
LAB_01951980:
    local_48 = *(undefined **)(lVar14 + 0xe8);
    local_40 = *(long *)(lVar14 + 0xf0);
    local_38 = 0x48a8;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    puVar15 = *(undefined **)(lVar14 + 0xe8) + *(long *)(lVar14 + 0xf0) + 0x4848;
    puVar4 = local_48;
    lVar7 = local_40;
    if (*(long *)(lVar14 + 0x108) == 0) goto LAB_01951a1c;
    plVar8 = *(long **)(*(long *)(lVar14 + 0x108) + 0x20);
    puVar5 = *(undefined **)(lVar14 + 0xe8);
    lVar6 = *(long *)(lVar14 + 0xf0);
  }
  local_40 = lVar6;
  local_48 = puVar5;
  if (plVar8 != (long *)0x0) {
    local_38 = 0x48a8;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    puVar4 = local_48;
    lVar7 = local_40;
  }
LAB_01951a1c:
  local_40 = lVar7;
  local_48 = puVar4;
  uVar12 = 0;
  uVar13 = 0;
  do {
    if (*(short *)(puVar15 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) != -2) {
      iVar2 = *(int *)(param_1 + 0xe60);
      iVar3 = *(int *)(param_1 + 0xe58);
      if (iVar2 < iVar3) {
        *(int *)(param_1 + 0xe60) = iVar2 + 1;
        iVar2 = *(int *)(param_1 + 0xe5c) + iVar2;
        iVar1 = 0;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        *(int *)(*(long *)(param_1 + 0xe50) + (long)(iVar2 - iVar1) * 4) = (int)uVar12;
      }
    }
    uVar12 = uVar13 + 1;
    uVar13 = uVar12 & 0xffffffff;
  } while ((int)uVar12 != 0xc);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar14 + 0x108) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x108) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

