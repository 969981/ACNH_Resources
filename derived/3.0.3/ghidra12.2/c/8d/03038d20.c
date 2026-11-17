
/* WARNING: Removing unreachable block (ram,0x03038e08) */
/* WARNING: Removing unreachable block (ram,0x03038dc8) */
/* WARNING: Removing unreachable block (ram,0x03038de8) */
/* WARNING: Removing unreachable block (ram,0x03038e28) */
/* WARNING: Removing unreachable block (ram,0x03038d94) */

void FUN_03038d20(uint *param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  float fVar18;
  float local_8c;
  float fStack_88;
  float local_84;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar9 = *(long *)(param_2 + 8);
  puVar4 = param_1 + (ulong)param_1[0x4b] * 8;
  if (1 < param_1[0x4b]) {
    puVar4 = param_1;
  }
  uVar11 = (ulong)*puVar4;
  if (0 < (int)*puVar4) {
    plVar13 = *(long **)(puVar4 + 2);
    do {
      if (*plVar13 == lVar9) {
        if (lVar9 != 0) goto LAB_03038e50;
        break;
      }
      plVar13 = plVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (*(long *)(param_1 + 0x4c) != 0) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x4c) + 0x218);
    uVar6 = (undefined4)((ulong)local_80 >> 0x20);
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    lVar12 = *(long *)(lVar9 + 0x218);
    if ((((lVar12 == *(long *)(lVar14 + 0x1460)) ||
         (local_80 = (undefined **)CONCAT44(uVar6,1), lVar12 == *(long *)(lVar14 + 0x1468))) ||
        (local_80 = (undefined **)CONCAT44(uVar6,2), lVar12 == *(long *)(lVar14 + 0x1470))) ||
       (local_80 = (undefined **)CONCAT44(uVar6,3), lVar12 == *(long *)(lVar14 + 0x1478))) {
      param_1[0x4f] = (uint)(lVar12 != *(long *)(lVar14 + 0x1460));
      *(undefined1 *)(param_1 + 0x4e) = 1;
      lVar9 = *(long *)(param_2 + 8);
    }
  }
LAB_03038e50:
  *(long *)(param_1 + 0x4c) = lVar9;
  if ((char)param_1[0x4e] == '\0') {
    return;
  }
  if (((ushort)param_1[0x50] & 1) != 0) {
    *(ushort *)(param_1 + 0x50) = (ushort)param_1[0x50] & 0xfffe;
  }
  FUN_03037ed0(param_1);
  if (param_1[0x4f] == 1) {
    param_1[0x4a] = param_1[0x4a] + 1;
    uVar2 = param_1[0x4b] + 1 & 1;
    uVar3 = -uVar2;
    if (-2 < (int)param_1[0x4b]) {
      uVar3 = uVar2;
    }
    param_1[0x4b] = uVar3;
    puVar4 = param_1 + (ulong)uVar3 * 8;
    if (1 < uVar3) {
      puVar4 = param_1;
    }
    plVar13 = *(long **)(puVar4 + 4);
    local_78 = 8;
    local_80 = &PTR_LAB_04a3ee98;
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
    lVar9 = (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
    if (*(float *)(lVar9 + 4) <= (float)param_1[0x12]) goto LAB_03039008;
    local_8c = (float)param_1[0x11];
    fStack_88 = (float)param_1[0x12] - (float)param_1[0x10];
    local_84 = (float)param_1[0x13];
    puVar4 = param_1 + (ulong)param_1[0x4b] * 8;
    if (1 < param_1[0x4b]) {
      puVar4 = param_1;
    }
    plVar13 = *(long **)(puVar4 + 4);
  }
  else {
    if (param_1[0x4f] != 0) goto LAB_03039008;
    param_1[0x4a] = param_1[0x4a] - 1;
    uVar2 = param_1[0x4b] + 3 & 1;
    uVar3 = -uVar2;
    if (-1 < (int)(param_1[0x4b] + 3)) {
      uVar3 = uVar2;
    }
    param_1[0x4b] = uVar3;
    puVar4 = param_1 + (ulong)uVar3 * 8;
    if (1 < uVar3) {
      puVar4 = param_1;
    }
    plVar13 = *(long **)(puVar4 + 4);
    local_78 = 8;
    local_80 = &PTR_LAB_04a3ee98;
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
    lVar9 = (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
    if ((float)param_1[0x12] <= *(float *)(lVar9 + 4)) goto LAB_03039008;
    local_8c = (float)param_1[0x11] + 0.0;
    fStack_88 = (float)param_1[0x12] + (float)param_1[0x10];
    puVar4 = param_1 + (ulong)param_1[0x4b] * 8;
    if (1 < param_1[0x4b]) {
      puVar4 = param_1;
    }
    plVar13 = *(long **)(puVar4 + 4);
    local_84 = (float)param_1[0x13] + 0.0;
  }
  local_80 = &PTR_LAB_04a3ee98;
  local_78 = 8;
  (**(code **)(*plVar13 + 0x18))(plVar13,&local_80);
  (**(code **)(plVar13[3] + 0x98))(plVar13[1],&local_8c);
LAB_03039008:
  puVar7 = PTR_DAT_04bc0cb8;
  if (1 < (int)param_1[0x36]) {
    puVar4 = param_1 + 0x32;
    if (*(uint **)(*(long *)(param_1 + 0x34) + 8) != puVar4) {
      ppuVar1 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
      puVar16 = *(uint **)(*(long *)(param_1 + 0x34) + 8);
      do {
        puVar17 = *(uint **)puVar16;
        puVar5 = *(uint **)(puVar16 + 2);
        puVar15 = puVar16 + -2;
        iVar8 = FUN_03038210(puVar17 + -2,puVar15);
        if (0 < iVar8) {
          do {
            puVar17 = *(uint **)puVar17;
            if (puVar17 == puVar4) {
              lVar9 = *(long *)puVar16;
              puVar17 = puVar4;
              goto joined_r0x03039178;
            }
            local_78 = 8;
            plVar13 = *(long **)(*(long *)(puVar17 + -2) + 0x10);
            local_80 = ppuVar1;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
            lVar9 = (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
            fVar18 = *(float *)(lVar9 + 4);
            local_78 = 8;
            plVar13 = *(long **)(*(long *)puVar15 + 0x10);
            local_80 = ppuVar1;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
            lVar9 = (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
          } while (fVar18 < *(float *)(lVar9 + 4));
          local_78 = 8;
          plVar13 = *(long **)(*(long *)puVar15 + 0x10);
          local_80 = (undefined **)(puVar7 + 0x10);
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
          (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
          local_78 = 8;
          plVar13 = *(long **)(*(long *)(puVar17 + -2) + 0x10);
          local_80 = (undefined **)(puVar7 + 0x10);
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
          (**(code **)(plVar13[3] + 0xa0))(plVar13[1]);
          lVar9 = *(long *)puVar16;
joined_r0x03039178:
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(puVar16 + 2);
          }
          if (*(undefined8 **)(puVar16 + 2) != (undefined8 *)0x0) {
            **(undefined8 **)(puVar16 + 2) = *(undefined8 *)puVar16;
          }
          puVar16[0] = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[3] = 0;
          puVar10 = *(undefined8 **)(puVar17 + 2);
          *(uint **)(puVar17 + 2) = puVar16;
          *(uint **)puVar16 = puVar17;
          *(undefined8 **)(puVar16 + 2) = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = puVar16;
          }
        }
        puVar16 = puVar5;
      } while (puVar5 != puVar4);
    }
  }
  (*(code *)**(undefined8 **)(param_1 + 0x20))(param_1 + 0x20,param_1[0x4a],param_1[0x1b]);
  return;
}

