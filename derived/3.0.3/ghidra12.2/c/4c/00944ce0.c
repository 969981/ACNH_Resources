
void FUN_00944ce0(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x1130) != param_1 + 0x1128) {
    lVar7 = (long)*(int *)(param_1 + 0x113c);
    lVar4 = *(long *)(param_1 + 0x1130) - lVar7;
    lVar8 = lVar4 + lVar7;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      if (*(int *)(lVar4 + 0xa4) == 2) {
        FUN_009392c8();
      }
      lVar4 = lVar8 - lVar7;
    } while (lVar4 != (param_1 + 0x1128) - lVar7);
  }
  puVar3 = PTR_DAT_04bb27c8;
  if (*(long *)(param_1 + 0x1148) != param_1 + 0x1140) {
    lVar7 = (long)*(int *)(param_1 + 0x1154);
    lVar4 = *(long *)(param_1 + 0x1148) - lVar7;
    lVar8 = lVar4 + lVar7;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      if (*(int *)(lVar4 + 0x44) == 2) {
        if (*(char *)(lVar4 + 0x40) != '\0') {
          lVar6 = *(long *)puVar3;
          plVar1 = (long *)(*(int *)(lVar6 + 0x117c) + lVar4);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar6 + 0x1178) = *(int *)(lVar6 + 0x1178) + -1;
          iVar2 = *(int *)(lVar4 + 0x44);
          if (iVar2 == 3) {
            puVar5 = (undefined8 *)(lVar6 + 0xa0);
          }
          else if (iVar2 == 2) {
            puVar5 = (undefined8 *)(lVar6 + 0x98);
          }
          else {
            if (iVar2 != 1) goto LAB_00944dac;
            puVar5 = (undefined8 *)(lVar6 + 0x90);
          }
          FUN_00971e40(*puVar5,0,lVar4 + 0x18);
        }
LAB_00944dac:
        *(undefined1 *)(lVar4 + 0x40) = 0;
      }
      lVar4 = lVar8 - lVar7;
    } while (lVar4 != (param_1 + 0x1140) - lVar7);
  }
  FUN_00961ef0(0x42200000,*(undefined8 *)(param_1 + 0x80),7);
  return;
}

