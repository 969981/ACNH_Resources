
uint FUN_03d4d0b0(undefined8 param_1,long *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_178;
  int local_170;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x408) + 8);
  local_158 = 0x100;
  local_55 = 0;
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_168,"%s.msbt",param_2[1]);
  if (*(long *)(lVar6 + 0x10) != lVar6 + 8) {
    lVar7 = (long)*(int *)(lVar6 + 0x1c);
    lVar5 = *(long *)(lVar6 + 0x10) - lVar7;
    do {
      if ((lVar5 != 0) && (plVar3 = (long *)FUN_03d54360(lVar5,&local_168), plVar3 != (long *)0x0))
      {
        if (param_3 < *(uint *)(plVar3 + 1)) {
          lVar6 = *plVar3;
          local_170 = *(int *)(lVar6 + 0x24);
          if (local_170 == -1) goto LAB_03d4d214;
          piVar4 = *(int **)(*(long *)(lVar6 + 0x18) + (long)local_170 * 0x18);
          if ((int)param_3 < *piVar4) {
            if ((ulong)(long)*(char *)(lVar6 + 0x10) < 3) {
              piVar1 = piVar4 + (int)(param_3 + 2);
              if (*piVar4 <= (int)(param_3 + 1)) {
                piVar1 = (int *)(*(long *)(lVar6 + 0x18) + (long)local_170 * 0x18 + 0xc);
              }
              local_170 = (*piVar1 - piVar4[(int)(param_3 + 1)]) +
                          *(int *)(&DAT_041e9350 + (long)*(char *)(lVar6 + 0x10) * 4) >> 1;
            }
            else {
              local_170 = -1;
            }
            local_178 = (long)piVar4 + (ulong)(uint)piVar4[(int)(param_3 + 1)];
          }
          else {
            local_178 = 0;
            local_170 = -1;
          }
          goto LAB_03d4d218;
        }
        break;
      }
      lVar5 = *(long *)(lVar5 + lVar7 + 8) - lVar7;
    } while (lVar5 != (lVar6 + 8) - lVar7);
  }
  local_170 = 0;
LAB_03d4d214:
  local_178 = 0;
LAB_03d4d218:
  uVar2 = FUN_03d4ce90(param_1,&local_178);
  return uVar2 & 1;
}

