
void FUN_03038710(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  float local_7c;
  float fStack_78;
  float local_74;
  undefined *local_70;
  undefined4 local_68;
  
  puVar4 = PTR_DAT_04bc0cb8;
  plVar9 = *(long **)(param_1 + 0x10);
  local_7c = *(float *)(param_1 + 0x44) + 0.0;
  fStack_78 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40) * 0.0;
  local_74 = *(float *)(param_1 + 0x4c) + 0.0;
  local_68 = 8;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  (**(code **)(plVar9[3] + 0x98))(plVar9[1],&local_7c);
  local_68 = 8;
  plVar9 = *(long **)(param_1 + 0x30);
  local_7c = *(float *)(param_1 + 0x44) + 0.0;
  fStack_78 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x40);
  local_74 = *(float *)(param_1 + 0x4c) + 0.0;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x18))(plVar9,&local_70);
  (**(code **)(plVar9[3] + 0x98))(plVar9[1],&local_7c);
  if (1 < *(int *)(param_1 + 0xd8)) {
    plVar9 = (long *)(param_1 + 200);
    plVar11 = *(long **)(*(long *)(param_1 + 0xd0) + 8);
    if (plVar11 != plVar9) {
      puVar1 = puVar4 + 0x10;
      do {
        plVar12 = (long *)*plVar11;
        plVar3 = (long *)plVar11[1];
        plVar8 = plVar11 + -1;
        iVar5 = FUN_03038210(plVar12 + -1,plVar8);
        if (0 < iVar5) {
          do {
            plVar12 = (long *)*plVar12;
            if (plVar12 == plVar9) {
              lVar6 = *plVar11;
              plVar12 = plVar9;
              goto joined_r0x03038958;
            }
            local_68 = 8;
            plVar10 = *(long **)(plVar12[-1] + 0x10);
            local_70 = puVar1;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_70);
            lVar6 = (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
            fVar13 = *(float *)(lVar6 + 4);
            local_68 = 8;
            plVar10 = *(long **)(*plVar8 + 0x10);
            local_70 = puVar1;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_70);
            lVar6 = (**(code **)(plVar10[3] + 0xa0))(plVar10[1]);
          } while (fVar13 < *(float *)(lVar6 + 4));
          puVar2 = puVar4 + 0x10;
          local_68 = 8;
          plVar8 = *(long **)(*plVar8 + 0x10);
          local_70 = puVar2;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
          (**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
          local_68 = 8;
          plVar8 = *(long **)(plVar12[-1] + 0x10);
          local_70 = puVar2;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_70);
          (**(code **)(plVar8[3] + 0xa0))(plVar8[1]);
          lVar6 = *plVar11;
joined_r0x03038958:
          if (lVar6 != 0) {
            *(long *)(lVar6 + 8) = plVar11[1];
          }
          if ((long *)plVar11[1] != (long *)0x0) {
            *(long *)plVar11[1] = *plVar11;
          }
          *plVar11 = 0;
          plVar11[1] = 0;
          puVar7 = (undefined8 *)plVar12[1];
          plVar12[1] = (long)plVar11;
          *plVar11 = (long)plVar12;
          plVar11[1] = (long)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar11;
          }
        }
        plVar11 = plVar3;
      } while (plVar3 != plVar9);
    }
  }
  return;
}

