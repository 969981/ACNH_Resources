
void FUN_00887ac0(undefined8 *param_1,uint *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  undefined *local_40;
  long lStack_38;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar5[3];
  uVar8 = *param_2 - (*param_2 >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar6 = *puVar5 ^ *puVar5 << 0xb;
  uVar8 = uVar8 + (uVar8 >> 8);
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
  puVar5[2] = uVar2;
  puVar5[3] = uVar6;
  *(int *)*param_1 = (int)((ulong)(uVar8 + (uVar8 >> 0x10) & 0x3f) * (ulong)uVar6 >> 0x20) + 1;
  uVar8 = *param_2;
  if (uVar8 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    iVar7 = *(int *)*param_1 + 1;
    uVar6 = 0xffffffff;
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 < 2) {
        uVar8 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
        uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
        uVar8 = uVar8 + (uVar8 >> 8);
        uVar6 = uVar8 + (uVar8 >> 0x10) & 0x3f;
        break;
      }
      uVar8 = uVar8 - 1 & uVar8;
    } while (uVar8 != 0);
  }
  *(uint *)param_1[1] = uVar6;
  puVar4 = PTR_DAT_04bb57f8;
  puVar3 = PTR_DAT_04bb57f0;
  uVar8 = *(uint *)param_1[1];
  if ((int)*(uint *)(DAT_04cea100 + 0x1488) < 1) {
    if (*(long *)(DAT_04cea100 + 0x1378) == 0) {
      return;
    }
    puVar5 = *(uint **)(*(long *)(DAT_04cea100 + 0x1378) + 8);
    if (puVar5 == (uint *)0x0) {
      return;
    }
    if ((uVar8 < *(uint *)(DAT_04cea100 + 0x1390)) &&
       (*(char *)(*(long *)(DAT_04cea100 + 0x1398) + (long)(int)uVar8) == '\0')) {
      return;
    }
    if (*puVar5 <= uVar8) {
      return;
    }
    if (puVar5[1] == 0) {
      return;
    }
    if ((ushort)puVar5[2] == 0) {
      return;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * uVar8 + (uint)(ushort)puVar5[2] * 8 + iVar7) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(DAT_04cea100 + 0x1488) <= uVar8) {
      return;
    }
    if (*(uint *)(DAT_04cea100 + 0x1478) <= uVar8) {
      uVar8 = 0;
    }
    puVar5 = *(uint **)(*(long *)(DAT_04cea100 + 0x1480) + (ulong)uVar8 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar9 = *PTR_DAT_04bb57f0;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x40) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar8) {
            if ((undefined2 *)((ulong)uVar8 + (long)puVar5) != (undefined2 *)0x0) {
              local_18 = *(undefined2 *)((ulong)uVar8 + (long)puVar5);
              goto LAB_00887d7c;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar5;
        local_18 = 0xfffe;
        if ((*puVar5 == 0) || (puVar5 == puVar11)) goto LAB_00887d7c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar11)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar1 - (long)puVar11);
        if (lVar1 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar11));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x20cb67bc) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00887d78;
        }
        iVar7 = 0;
        if (*piVar12 != -1) {
          iVar7 = *piVar12;
        }
        *(int *)(puVar4 + 4) = iVar7;
        if (*puVar5 == 0) break;
      } while( true );
    }
LAB_00887d78:
    local_18 = 0xfffe;
LAB_00887d7c:
    local_16 = 0;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    (**(code **)(*param_3 + 0x18))(param_3);
    lStack_38 = param_3[1];
    local_40 = PTR_DAT_04bb2020 + 0x10;
    FUN_0273f3c4(&local_40,*(undefined4 *)param_1[1]);
  }
  return;
}

