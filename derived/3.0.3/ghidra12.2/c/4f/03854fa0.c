
void FUN_03854fa0(short *param_1,long param_2,long param_3,ulong param_4)

{
  short *psVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [48];
  
  *(byte *)(param_3 + 0x280) = *(byte *)(param_3 + 0x280) | 1;
  uVar8 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_3 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined8 *)(param_3 + 0x238) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_3 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_3 + 0x248) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 600);
  *(undefined8 *)(param_3 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_3 + 600) = uVar8;
  uVar2 = FUN_03855160();
  if ((uVar2 & 1) != 0) {
    if (0 < *(int *)(param_1 + 0x200)) {
      uVar2 = 0;
      psVar7 = param_1;
      do {
        psVar1 = psVar7;
        if (0x7f < uVar2) {
          psVar1 = param_1;
        }
        plVar6 = (long *)**(undefined8 **)(*(long *)(param_3 + 0x38) + (long)psVar1[2] * 8);
        plVar3 = (long *)**(undefined8 **)(*(long *)(param_2 + 0x38) + (long)*psVar1 * 8);
        (**(code **)(*plVar3 + 0x60))(plVar3,auStack_80,auStack_8c,(long)psVar1[1]);
        (**(code **)(*plVar6 + 0x48))(plVar6,auStack_80,auStack_8c,(long)psVar1[3]);
        uVar2 = uVar2 + 1;
        psVar7 = psVar7 + 4;
      } while ((long)uVar2 < (long)*(int *)(param_1 + 0x200));
    }
    *(byte *)(param_3 + 0x280) = *(byte *)(param_3 + 0x280) | 1;
    *(undefined4 *)(param_3 + 0x268) = *(undefined4 *)(param_2 + 0x268);
    *(undefined4 *)(param_3 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
    *(undefined4 *)(param_3 + 0x270) = *(undefined4 *)(param_2 + 0x270);
    if ((param_4 & 1) != 0) {
      plVar3 = *(long **)(param_3 + 0x58);
      if (plVar3 == (long *)0x0) {
        if (*(int *)(param_3 + 0x40) != 0) {
          lVar5 = (long)*(int *)(param_3 + 0x40) << 3;
          puVar4 = *(undefined8 **)(param_3 + 0x48);
          do {
            FUN_039a9a90(param_3,*puVar4);
            lVar5 = lVar5 + -8;
            puVar4 = puVar4 + 1;
          } while (lVar5 != 0);
        }
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,param_3);
        if (*(int *)(param_3 + 0x40) != 0) {
          lVar5 = (long)*(int *)(param_3 + 0x40) << 3;
          puVar4 = *(undefined8 **)(param_3 + 0x48);
          do {
            FUN_039a9a90(param_3,*puVar4);
            lVar5 = lVar5 + -8;
            puVar4 = puVar4 + 1;
          } while (lVar5 != 0);
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
      }
      *(byte *)(param_3 + 0x280) = *(byte *)(param_3 + 0x280) & 0xfe;
    }
  }
  return;
}

