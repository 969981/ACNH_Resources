
void FUN_0233fe30(undefined4 *param_1,long param_2,char *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  byte *pbVar9;
  byte bVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  byte local_68 [4];
  uint local_64;
  
  if (**(char **)(param_2 + 0x5fa8) != '\0') goto LAB_0233fe60;
  plVar11 = *(long **)(param_2 + 0x48);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  if (plVar11 == (long *)0x0) {
    if (param_3[2] != '\0') {
      uVar13 = 0;
      plVar11 = (long *)0x0;
      uVar3 = 0;
LAB_0233ffbc:
      FUN_0233a884(param_1,param_2,uVar3 & 1);
      puVar2 = PTR_DAT_04bb43c0;
      lVar15 = *(long *)PTR_DAT_04bb43c0;
      uVar3 = FUN_0277d6c4(param_1);
      lVar14 = *(long *)puVar2;
      plVar12 = plVar11;
      if (lVar14 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_70 = 0;
          local_78 = *param_1;
          uStack_74 = param_1[1];
          local_80 = PTR_DAT_04bc0510 + 0x10;
          uVar3 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar2 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(param_1);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if (uVar3 < *(uint *)(lVar14 + 0x1d8)) {
                lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar3 * 8);
                if (lVar14 != 0) {
                  local_70 = lVar14;
                }
              }
            }
          }
          local_68[0] = 0;
          local_68[1] = 0;
          FUN_01adab50(&local_80,local_68);
          uVar3 = 0;
          do {
            local_64 = uVar3;
            if ((local_64 != 0) && (local_64 < 0xe)) {
              uVar3 = local_64 + 7;
              if (-1 < (int)local_64) {
                uVar3 = local_64;
              }
              if (((uint)((int)uVar3 >> 3) < 2) &&
                 ((local_68[(uint)((int)uVar3 >> 3)] >> (ulong)(local_64 & 7) & 1) != 0)) {
                if (local_64 == 9) {
                  return;
                }
                break;
              }
            }
            uVar3 = local_64 + 1;
          } while (local_64 + 1 != 0xe);
        }
      }
      goto LAB_02340138;
    }
    if (*param_3 == '\0') goto LAB_0233fe60;
LAB_02340140:
    if ((*(long **)(param_2 + 0x99e0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(param_2 + 0x99e0), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
    }
    puVar8 = (undefined2 *)FUN_02816430(*(long *)(param_2 + 0x99c8) + *(long *)(param_2 + 0x99c0));
    *(undefined2 *)param_1 = *puVar8;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar8 + 3);
    param_1[1] = *(undefined4 *)(puVar8 + 2);
    if ((((uVar3 & 1) == 0) && (*(long *)(param_2 + 0x99e0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_2 + 0x99e0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  else {
    uVar5 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
    uVar13 = uVar5 & 0xffffffff;
    plVar12 = plVar11;
    if ((uVar5 & 1) == 0) {
      plVar12 = (long *)0x0;
    }
    if ((((uVar5 & 1) == 0) || (param_3[1] == '\0')) ||
       (puVar6 = (undefined4 *)FUN_02547c90(plVar12 + 0x3dd), *(char *)((long)puVar6 + 9) == '\0'))
    {
      if (param_3[2] != '\0') {
        if ((uVar5 & 1) == 0) {
          uVar13 = 0;
          plVar11 = (long *)0x0;
          uVar3 = 0;
          goto LAB_0233ffbc;
        }
        iVar4 = *(int *)(param_2 + 0x5f40);
        if (iVar4 - 2U < 2) {
LAB_0233ff38:
          pbVar9 = (byte *)(param_2 + 0x5f44);
        }
        else {
          if (iVar4 == 5) {
            if (*(byte *)(param_2 + 0x6050) < 8) {
              pbVar9 = (byte *)(param_2 + 0x6050);
              goto LAB_0233ff9c;
            }
          }
          else if (iVar4 == 1) goto LAB_0233ff38;
          pbVar9 = PTR_DAT_04bb32e0;
        }
LAB_0233ff9c:
        bVar10 = *pbVar9;
        if (7 < bVar10) {
          bVar10 = 0xff;
        }
        local_80 = (undefined *)CONCAT71(local_80._1_7_,bVar10);
        uVar3 = FUN_02538bb0(&local_80);
        uVar13 = 1;
        goto LAB_0233ffbc;
      }
LAB_02340138:
      if (*param_3 != '\0') goto LAB_02340140;
      if ((uVar13 & 1) == 0) {
LAB_0233fe60:
        uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
        param_1[1] = uVar1;
        return;
      }
      plVar12 = plVar12 + 0x3dd;
      if ((param_3[1] == '\0') || (lVar14 = FUN_02547c90(plVar12), *(char *)(lVar14 + 9) == '\0')) {
        FUN_0252d8f0(param_1,plVar12);
        return;
      }
      puVar6 = (undefined4 *)FUN_02547c90(plVar12);
    }
    uVar1 = puVar6[1];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
  }
  return;
}

