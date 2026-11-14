
void FUN_01d71790(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) &&
     (((*(char *)(lVar6 + 0x6c0) == '\0' || (char)param_3[0xd7] == '\0' ||
       (*(long *)(lVar6 + 8) != *param_3)) || (*(long *)(lVar6 + 0x60) != param_3[0xb])))) {
    memcpy((long *)(lVar6 + 8),param_3,0x6b8);
    *(char *)(lVar6 + 0x6c0) = (char)param_3[0xd7];
    iVar2 = **(int **)(param_1 + 0x40);
    lVar6 = (long)iVar2;
    if (iVar2 != 0) {
      lVar8 = 0;
      if ((char)param_3[0xd7] != '\0') {
        lVar8 = *param_3;
      }
      while( true ) {
        lVar6 = lVar6 + -1;
        plVar7 = *(long **)(*(long *)(*(int **)(param_1 + 0x40) + 2) + lVar6 * 8);
        if (*plVar7 == 0) break;
        if (*plVar7 == lVar8) {
          if ((((char)plVar7[0xd8] != '\0' && (char)param_3[0xd7] != '\0') &&
              (plVar7[1] == *param_3)) && (plVar7[0xc] == param_3[0xb])) {
            lVar8 = *param_2;
            *(int *)(lVar8 + 0x6d0) = (int)plVar7[0xda];
            *(undefined4 *)(lVar8 + 0x6d4) = *(undefined4 *)((long)plVar7 + 0x6d4);
            lVar6 = plVar7[0xdb];
            *(undefined8 *)(lVar8 + 0x6d9) = 0;
            *(undefined8 *)(lVar8 + 0x6e1) = 0;
            *(undefined8 *)(lVar8 + 0x6e9) = 0;
            *(undefined8 *)(lVar8 + 0x6f0) = 0;
            *(char *)(lVar8 + 0x6d8) = (char)lVar6;
            uVar3 = *(undefined8 *)((long)plVar7 + 0x6d9);
            uVar4 = *(undefined8 *)((long)plVar7 + 0x6e1);
            uVar5 = *(undefined8 *)((long)plVar7 + 0x6e9);
            *(undefined8 *)(lVar8 + 0x6ef) = *(undefined8 *)((long)plVar7 + 0x6ef);
            *(undefined8 *)(lVar8 + 0x6e9) = uVar5;
            *(undefined8 *)(lVar8 + 0x6e1) = uVar4;
            *(undefined8 *)(lVar8 + 0x6d9) = uVar3;
            *(char *)(lVar8 + 0x6f8) = (char)plVar7[0xdf];
            uVar1 = *(undefined1 *)((long)plVar7 + 0x6f9);
            *(undefined8 *)(lVar8 + 0x6fa) = 0;
            *(undefined8 *)(lVar8 + 0x702) = 0;
            *(undefined8 *)(lVar8 + 0x70a) = 0;
            *(undefined8 *)(lVar8 + 0x712) = 0;
            *(undefined8 *)(lVar8 + 0x71a) = 0;
            *(undefined8 *)(lVar8 + 0x722) = 0;
            *(undefined8 *)(lVar8 + 0x72a) = 0;
            *(undefined8 *)(lVar8 + 0x72f) = 0;
            *(undefined1 *)(lVar8 + 0x6f9) = uVar1;
            uVar3 = *(undefined8 *)((long)plVar7 + 0x6fa);
            uVar4 = *(undefined8 *)((long)plVar7 + 0x702);
            uVar5 = *(undefined8 *)((long)plVar7 + 0x70a);
            *(undefined8 *)(lVar8 + 0x712) = *(undefined8 *)((long)plVar7 + 0x712);
            *(undefined8 *)(lVar8 + 0x70a) = uVar5;
            *(undefined8 *)(lVar8 + 0x702) = uVar4;
            *(undefined8 *)(lVar8 + 0x6fa) = uVar3;
            uVar3 = *(undefined8 *)((long)plVar7 + 0x71a);
            uVar4 = *(undefined8 *)((long)plVar7 + 0x722);
            uVar5 = *(undefined8 *)((long)plVar7 + 0x72a);
            *(undefined4 *)(lVar8 + 0x732) = *(undefined4 *)((long)plVar7 + 0x732);
            *(undefined8 *)(lVar8 + 0x72a) = uVar5;
            *(undefined8 *)(lVar8 + 0x722) = uVar4;
            *(undefined8 *)(lVar8 + 0x71a) = uVar3;
            *(undefined1 *)(lVar8 + 0x737) = *(undefined1 *)((long)plVar7 + 0x737);
            lVar6 = plVar7[0xe7];
            *(int *)(lVar8 + 0x740) = (int)plVar7[0xe8];
            *(long *)(lVar8 + 0x738) = lVar6;
            *(undefined1 *)(lVar8 + 0x744) = *(undefined1 *)((long)plVar7 + 0x744);
            lVar6 = plVar7[0xe9];
            *(undefined8 *)(lVar8 + 0x750) = 0;
            *(long *)(lVar8 + 0x748) = lVar6;
            lVar6 = plVar7[0xea];
            *(undefined4 *)(lVar8 + 0x753) = *(undefined4 *)((long)plVar7 + 0x753);
            *(int *)(lVar8 + 0x750) = (int)lVar6;
            *(long *)(lVar8 + 0x758) = plVar7[0xeb];
            memset((void *)(lVar8 + 0x760),0,0x400);
            memcpy((void *)(lVar8 + 0x760),plVar7 + 0xec,0x3ff);
            *(char *)(lVar8 + 0x6c8) = (char)plVar7[0xd9];
            FUN_01d719fc(*param_2 + 0xb60,plVar7 + 0x16c);
            return;
          }
          break;
        }
        if (lVar6 == 0) break;
      }
    }
    *(undefined1 *)(*param_2 + 0x6c8) = 0;
    *(undefined1 *)(*param_2 + 0xb60) = 0;
  }
  return;
}

