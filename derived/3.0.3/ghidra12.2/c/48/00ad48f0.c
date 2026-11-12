
uint FUN_00ad48f0(long param_1,uint *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bb6428;
  puVar2 = PTR_DAT_04bb6420;
  if (*param_2 != 0) {
    cVar9 = *PTR_DAT_04bb6420;
    do {
      if (cVar9 != '\0') {
        uVar4 = *(uint *)(puVar3 + 0x20);
        if ((int)uVar4 < 0) {
          if (uVar4 == 0xffffffff) goto LAB_00ad4980;
        }
        else if ((ushort *)((ulong)uVar4 + (long)param_2) != (ushort *)0x0) {
          uVar14 = (ulong)*(ushort *)((ulong)uVar4 + (long)param_2);
          goto LAB_00ad4a14;
        }
        goto LAB_00ad4a10;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
LAB_00ad4980:
      puVar7 = (uint *)(ulong)*param_2;
      uVar14 = 0;
      if ((*param_2 == 0) || (param_2 == puVar7)) {
LAB_00ad4a14:
        uVar4 = *param_2;
        if (uVar4 == 0) goto LAB_00ad4abc;
        uVar11 = *(uint *)(puVar3 + 0x38);
        goto LAB_00ad4a34;
      }
      lVar13 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar7)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)param_2 + (lVar13 - (long)puVar7);
      if (lVar13 == 0) {
LAB_00ad4a10:
        uVar14 = 0;
        goto LAB_00ad4a14;
      }
      uVar14 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar7));
      *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
      if (uVar14 == 0) goto LAB_00ad4a10;
      piVar12 = (int *)(lVar13 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_00ad4a10;
      }
      iVar5 = 0;
      if (*piVar12 != -1) {
        iVar5 = *piVar12;
      }
      *(int *)(puVar3 + 0x20) = iVar5;
    } while (*param_2 != 0);
  }
  uVar14 = 0;
LAB_00ad4abc:
  if (*(ushort *)(param_3 + 0xc) != 0xfffe) {
    local_48 = (uint)*(ushort *)(param_3 + 0xc);
    local_44 = 0;
    FUN_0277d4ac(&local_48);
    puVar2 = PTR_DAT_04bb43c0;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_48);
    lVar13 = *(long *)puVar2;
    if (lVar13 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_50 = 0;
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_58 = (char *)CONCAT44(local_44,local_48);
        uVar4 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_48);
            uVar4 = ((uint)uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
               (((puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8),
                 puVar7 != (uint *)0x0 && (uVar4 = *puVar7, uVar4 != 0)) &&
                (puVar7 != (uint *)(ulong)uVar4)))) {
              puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
              if (*puVar8 != 0) {
                uVar4 = puVar8[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar13 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2) == 0x6a)
                       ) {
                      uVar4 = FUN_00ad441c(uVar6,param_3,&local_48);
                      goto LAB_00ad4d60;
                    }
                  }
                }
                if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) &&
                   ((ulong)(ushort)puVar8[2] != 0)) {
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar13 = (long)puVar8 + lVar13 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar13 != 0) {
                    uVar11 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar11 = (uint)((ulong)((long)puVar7 - lVar13) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2) == 0x69)
                       ) {
                      uVar4 = FUN_00ad42e8(uVar6,param_3,&local_48);
                      goto LAB_00ad4d60;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  plVar1 = (long *)(param_1 + uVar14 * 0x20);
  uVar10 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (((uVar10 & 1) == 0) || (uVar10 = (**(code **)*plVar1)(plVar1,param_3), (uVar10 & 1) != 0)) {
    uVar10 = (**(code **)(plVar1[0x800] + 0x10))(plVar1 + 0x800);
    if ((uVar10 & 1) != 0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_58 = "MainmenuRndDailyQuest";
      iVar5 = FUN_0274bce0(param_3,&local_60);
      uVar4 = 0;
      if (iVar5 == 0) goto LAB_00ad4d60;
      if (*(int *)(param_1 + uVar14 * 4 + 0x8000) < *(int *)(param_3 + 8)) goto LAB_00ad4d54;
    }
    uVar4 = 1;
  }
  else {
LAB_00ad4d54:
    uVar4 = 0;
  }
LAB_00ad4d60:
  return uVar4 & 1;
LAB_00ad4a34:
  if (-1 < (int)uVar11) {
    if (((char *)((long)param_2 + (ulong)uVar11) != (char *)0x0) &&
       (*(char *)((long)param_2 + (ulong)uVar11) != '\0')) goto LAB_00ad4d54;
    goto LAB_00ad4abc;
  }
  if ((uVar11 != 0xffffffff) || (lVar13 = (long)param_2 - (ulong)uVar4, lVar13 == 0))
  goto LAB_00ad4abc;
  lVar15 = 0xc;
  if (*(char *)(lVar13 + 10) != '\0') {
    lVar15 = 0x1c;
  }
  if (lVar15 + lVar13 == 0) goto LAB_00ad4abc;
  uVar10 = (ulong)*(ushort *)(lVar13 + 8);
  *(undefined4 *)(puVar3 + 0x38) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_00ad4abc;
  puVar7 = (uint *)(lVar15 + lVar13 + 4);
  while (puVar7[-1] != 0xc47fe703) {
    puVar7 = puVar7 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_00ad4abc;
  }
  uVar11 = 0;
  if (*puVar7 != 0xffffffff) {
    uVar11 = *puVar7;
  }
  *(uint *)(puVar3 + 0x38) = uVar11;
  uVar4 = *param_2;
  if (uVar4 == 0) goto LAB_00ad4abc;
  goto LAB_00ad4a34;
}

