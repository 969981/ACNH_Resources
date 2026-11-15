
bool FUN_01f95090(long param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint local_18;
  uint local_14;
  
  puVar4 = PTR_DAT_04bc2340;
  puVar3 = PTR_DAT_04bc2338;
  if (param_2 != (uint *)0x0) {
    if (*param_2 != 0) {
      cVar6 = *PTR_DAT_04bc2338;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x14);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)param_2) != (ushort *)0x0) {
              uVar7 = *(ushort *)((ulong)uVar2 + (long)param_2);
              goto LAB_01f951b0;
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*param_2;
        uVar7 = 0xfffe;
        if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_01f951b0;
        lVar1 = 0xc;
        if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)param_2 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != -0x1e13a72a) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_01f951ac;
        }
        iVar5 = 0;
        if (*piVar10 != -1) {
          iVar5 = *piVar10;
        }
        *(int *)(puVar4 + 0x14) = iVar5;
        if (*param_2 == 0) break;
      } while( true );
    }
LAB_01f951ac:
    uVar7 = 0xfffe;
LAB_01f951b0:
    local_18 = (uint)uVar7;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    iVar5 = FUN_0277d6c4(&local_18);
    if (iVar5 == 0x3928) {
      FUN_021ea4a0(&local_38,*(undefined8 *)(param_1 + 8));
    }
    else {
      iVar5 = FUN_0277d6c4(&local_18);
      if (iVar5 == 0x1ce7) {
        local_3c = 1;
        FUN_021ea5f0(&local_38,*(undefined8 *)(param_1 + 8),&local_3c);
      }
      else {
        iVar5 = FUN_0277d6c4(&local_18);
        if (iVar5 == 0x392f) {
          FUN_021e9c30(&local_38,*(undefined8 *)(param_1 + 8),1);
        }
        else {
          local_38 = local_18;
          uStack_34 = local_14;
        }
      }
    }
    *param_3 = local_38;
    param_3[1] = uStack_34;
  }
  return param_2 != (uint *)0x0;
}

