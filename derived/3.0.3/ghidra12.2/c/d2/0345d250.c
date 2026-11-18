
void FUN_0345d250(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined **local_70;
  undefined4 local_68;
  
  if (*param_1 != 0) {
    plVar9 = param_1 + 0x35;
    lVar10 = 0x20;
    do {
      if ((((char)*plVar9 != '\0') && (uVar4 = *(uint *)(plVar9 + -0x11), uVar4 < 0x10e)) &&
         (lVar2 = *param_1 + 8, *(int *)(lVar2 + (ulong)uVar4 * 0x1a8 + 0x1a0) == 2)) {
        lVar6 = *(long *)((long)param_1 + lVar10);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(param_1 + 0x23);
          if (*(uint *)(lVar6 + 0x208) <= uVar3) {
            uVar3 = 0;
          }
          plVar7 = *(long **)(*(long *)(lVar6 + 0x210) + (long)(int)uVar3 * 8);
          if (plVar7 != (long *)0x0) {
            uVar5 = FUN_03463a4c(lVar2 + (ulong)uVar4 * 0x1a8,lVar2 + (ulong)uVar4 * 0x1a8 + 0x148,
                                 plVar9 + -4);
            if ((uVar5 & 1) == 0) {
              local_68 = 7;
              ppuVar1 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
              local_70 = ppuVar1;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
              (**(code **)(plVar7[3] + 0x88))(plVar7[1],0);
              local_68 = 0x1f;
              local_70 = ppuVar1;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
              plVar8 = param_1 + 0x240;
            }
            else {
              local_70 = &PTR_LAB_04a3ee98;
              local_68 = 7;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
              (**(code **)(plVar7[3] + 0x88))(plVar7[1],1);
              local_70 = &PTR_LAB_04a3ee98;
              local_68 = 0x1f;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_70);
              plVar8 = plVar9 + -4;
            }
            (**(code **)(plVar7[3] + 0x208))(plVar7[1],0,0,plVar8);
          }
        }
        *(char *)plVar9 = '\0';
      }
      lVar10 = lVar10 + 8;
      plVar9 = plVar9 + 0x12;
    } while (lVar10 != 0x110);
  }
  return;
}

