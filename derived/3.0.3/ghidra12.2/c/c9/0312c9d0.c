
void FUN_0312c9d0(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  long *plVar15;
  uint local_54;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined4 local_38;
  
  puVar4 = PTR_DAT_04bb6448;
  puVar3 = PTR_DAT_04bb6440;
  lVar8 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar8 + 0x1d40) < 1) {
    if (*(long *)(lVar8 + 0x1c30) == 0) {
      return;
    }
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1c30) + 8);
    if (puVar7 == (uint *)0x0) {
      return;
    }
    if ((param_3 < *(uint *)(lVar8 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar8 + 0x1c50) + (long)(int)param_3) == '\0')) {
      return;
    }
    if (*puVar7 <= param_3) {
      return;
    }
    if (puVar7[1] == 0) {
      return;
    }
    if ((ushort)puVar7[2] == 0) {
      return;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_3 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(lVar8 + 0x1d40) <= param_3) {
      return;
    }
    uVar14 = param_3;
    if (*(uint *)(lVar8 + 0x1d30) <= param_3) {
      uVar14 = 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x1d38) + (ulong)uVar14 * 8);
  }
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar10 = *PTR_DAT_04bb6440;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar14 = *(uint *)(puVar4 + 0x48);
          if (-1 < (int)uVar14) {
            lVar8 = (ulong)uVar14 + (long)puVar7;
            goto LAB_0312cb08;
          }
          if (uVar14 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        lVar8 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0312cb08;
        lVar8 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar8 - (long)puVar11);
        if (lVar1 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
        lVar8 = 0;
        if (uVar6 == 0) goto LAB_0312cb08;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x45f320f2) {
          piVar12 = piVar12 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) {
            lVar8 = 0;
            goto LAB_0312cb08;
          }
        }
        iVar9 = 0;
        if (*piVar12 != -1) {
          iVar9 = *piVar12;
        }
        *(int *)(puVar4 + 0x48) = iVar9;
      } while (*puVar7 != 0);
    }
    lVar8 = 0;
LAB_0312cb08:
    local_50 = PTR_DAT_04bb2020;
    lStack_48 = *(long *)PTR_PTR_04bb6438;
    *(uint *)(param_1 + 0x22c) = param_3;
    if (lVar8 != 0) {
      lStack_48 = lVar8;
    }
    local_50 = local_50 + 0x10;
    FUN_0312c050(param_1,param_3,0);
    plVar15 = *(long **)(*(long *)(param_1 + 0x210) + 0x560);
    if (plVar15 != (long *)0x0) {
      local_40 = PTR_DAT_04bc0878 + 0x10;
      local_38 = 0x15;
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_40);
      (**(code **)(plVar15[3] + 0x640))(plVar15[1]);
    }
    uVar2 = param_2 - 1;
    *(undefined1 *)(param_1 + 0x234) = 1;
    *(uint *)(param_1 + 0x230) = uVar2;
    uVar14 = uVar2;
    if (*(uint *)(param_1 + 0x218) <= uVar2) {
      uVar14 = 0;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x220) + (long)(int)uVar14 * 8);
    uVar6 = (**(code **)(*plVar15 + 0xf0))(plVar15);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)((long)plVar15 + 0x21c) = 0;
      *(undefined4 *)(plVar15 + 0x43) = 0xffffffff;
      if (*(int *)((long)plVar15 + (ulong)*(byte *)(plVar15 + 0x40) * 4 + 0x1f0) == -1) {
        *(undefined4 *)((long)plVar15 + (ulong)*(byte *)(plVar15 + 0x40) * 4 + 0x1f0) = 2;
      }
    }
    puVar7 = (uint *)FUN_0279b8c0(param_1 + 0x1f8,&local_50,param_2);
    local_54 = *puVar7;
    uVar6 = nn::time::IsValidDate(local_54 & 0xffff,local_54 >> 0x10 & 0xff,local_54 >> 0x18);
    if ((uVar6 & 1) == 0) {
      uVar14 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      uVar6 = nn::time::IsValidDate
                        (uVar14 & 0xffff,uVar14 >> 0x10 & 0xff,
                         (uint)((ulong)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x18)
                         & 0xff);
      if ((uVar6 & 1) != 0) {
        local_54 = uVar14;
      }
    }
    uVar14 = uVar2;
    if (*(uint *)(param_1 + 0x218) <= uVar2) {
      uVar14 = 0;
    }
    FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x220) + (long)(int)uVar14 * 8),&local_54);
    uVar6 = FUN_03256ab0(&local_50);
    uVar14 = uVar2;
    if (*(uint *)(param_1 + 0x218) <= uVar2) {
      uVar14 = 0;
    }
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x220) + (long)(int)uVar14 * 8);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_0279cca8(&local_50);
      local_40 = (undefined *)CONCAT44(local_40._4_4_,uVar5);
      FUN_03128bd0(uVar13,&local_50,uVar5);
    }
    else {
      FUN_03128d70(uVar13,&local_50,uVar2);
    }
  }
  return;
}

