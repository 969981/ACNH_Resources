
void FUN_01702b70(long param_1,uint param_2,uint param_3)

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
  undefined4 local_18;
  undefined4 local_14;
  
  uVar7 = param_2;
  if ((param_3 & 0xfffffffe) == 2) {
    local_14 = 0;
    if (*(long *)(param_1 + 0x1138) == 0) {
      puVar8 = &DAT_04c931a0;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x1138) + 0x88) + 0x60);
    }
    local_18 = *(undefined4 *)(puVar8 + 0xb);
    puVar6 = (uint *)FUN_0171ec68(&local_18);
    puVar5 = PTR_DAT_04bbde90;
    puVar4 = PTR_DAT_04bbde88;
    if (puVar6 != (uint *)0x0) {
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
              uVar7 = param_2;
              if (-1 < (char)bVar3) {
                uVar7 = (uint)bVar3;
              }
              goto LAB_01702d00;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar6;
          uVar7 = 0;
          if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01702d00;
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
            if (uVar11 == 0) goto LAB_01702cfc;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
          uVar7 = 0;
          if (*puVar6 == 0) goto LAB_01702d00;
        } while( true );
      }
LAB_01702cfc:
      uVar7 = 0;
    }
  }
LAB_01702d00:
  FUN_01707f58(param_1,uVar7,param_3,0);
  return;
}

