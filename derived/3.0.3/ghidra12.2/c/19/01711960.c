
void FUN_01711960(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint local_50;
  undefined1 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined1 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x1138) == 0) {
      puVar8 = &DAT_04c931a0;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
    }
    local_50 = *(uint *)(puVar8 + 0xb);
    puVar6 = (uint *)FUN_0171ec68(&local_50);
    puVar5 = PTR_DAT_04bbde90;
    puVar4 = PTR_DAT_04bbde88;
    if (puVar6 == (uint *)0x0) {
LAB_01711b40:
      uVar7 = param_3;
    }
    else {
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar7) {
              if ((byte *)((ulong)uVar7 + (long)puVar6) == (byte *)0x0) break;
              bVar3 = *(byte *)((ulong)uVar7 + (long)puVar6);
              if ((char)bVar3 < '\0') goto LAB_01711b40;
              uVar7 = (uint)bVar3;
              goto LAB_01711b44;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar7 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01711b44;
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != -0x2ade889f) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01711b38;
          }
          uVar7 = 0;
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
          if (*puVar6 == 0) goto LAB_01711b44;
        } while( true );
      }
LAB_01711b38:
      uVar7 = 0;
    }
LAB_01711b44:
    FUN_01707f58(param_1,uVar7,2,0);
    if (*(long *)(param_1 + 0x1138) == 0) {
      puVar8 = &DAT_04c931a0;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
    }
    local_50 = *(uint *)(puVar8 + 0xb);
    puVar6 = (uint *)FUN_0171ec68(&local_50);
    puVar5 = PTR_DAT_04bbde90;
    puVar4 = PTR_DAT_04bbde88;
    if (puVar6 == (uint *)0x0) {
LAB_01711cac:
      uVar7 = param_3;
    }
    else {
      if (*puVar6 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar7) {
              if ((byte *)((ulong)uVar7 + (long)puVar6) == (byte *)0x0) break;
              bVar3 = *(byte *)((ulong)uVar7 + (long)puVar6);
              if ((char)bVar3 < '\0') goto LAB_01711cac;
              uVar7 = (uint)bVar3;
              goto LAB_01711cb0;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar7 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01711cb0;
          lVar2 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != -0x2ade889f) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01711ca4;
          }
          uVar7 = 0;
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
          if (*puVar6 == 0) goto LAB_01711cb0;
        } while( true );
      }
LAB_01711ca4:
      uVar7 = 0;
    }
LAB_01711cb0:
    FUN_01707f58(param_1,uVar7,3,0);
  }
  else {
    local_4c = 1;
    local_40 = 1;
    local_48 = *(undefined2 *)PTR_DAT_04bb37e0;
    local_46 = PTR_DAT_04bb37e0[2];
    local_45 = PTR_DAT_04bb37e0[3];
    local_44 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    local_32 = 0;
    local_34 = 0x101;
    local_50 = param_3;
    local_3c = local_48;
    local_3a = local_46;
    local_39 = local_45;
    local_38 = local_44;
    FUN_0170f380(param_1,&local_50);
  }
  return;
}

