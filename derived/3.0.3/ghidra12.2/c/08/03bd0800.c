
undefined8 FUN_03bd0800(long *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  
  if ((long *)param_1[1] != param_1) {
    lVar9 = (long)*(int *)((long)param_1 + 0x14);
    lVar10 = param_1[1] - lVar9;
    do {
      plVar7 = (long *)(lVar10 + 8);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      pcVar8 = *(char **)(lVar10 + 0x10);
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar5 = (char *)param_2[1];
      if (pcVar8 == pcVar5) {
        return 0;
      }
      cVar2 = **(char **)(lVar10 + 0x10);
      if (cVar2 == *pcVar5) {
        if (cVar2 == '\0') {
          return 0;
        }
        lVar6 = 0x7fffe;
        pcVar8 = *(char **)(lVar10 + 0x10);
        while( true ) {
          if (pcVar8[1] != pcVar5[1]) break;
          if (pcVar8[1] == '\0') {
            return 0;
          }
          if (pcVar8[2] != pcVar5[2]) break;
          if (pcVar8[2] == '\0') {
            return 0;
          }
          if ((lVar6 == 0) || (cVar2 = pcVar8[3], cVar2 != pcVar5[3])) break;
          lVar6 = lVar6 + -3;
          pcVar5 = pcVar5 + 3;
          pcVar8 = pcVar8 + 3;
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
      lVar10 = *(long *)(lVar10 + lVar9 + 8) - lVar9;
    } while (lVar10 != (long)param_1 - lVar9);
  }
  lVar10 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x90);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar10 + 8);
      if (lVar9 != 0) {
        puVar4 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_4 = (long *)*puVar4;
      puVar4 = (undefined8 *)0x0;
      if (param_4 == (long *)0x0) goto LAB_03bd098c;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_4 + 0x30))(param_4,0x90,8);
  }
LAB_03bd098c:
  *(undefined1 *)((long)puVar4 + 0x2c) = 0;
  puVar3 = PTR_DAT_04bb2020;
  *(undefined4 *)(puVar4 + 5) = 0x20;
  puVar4[4] = (undefined1 *)((long)puVar4 + 0x2c);
  *(undefined1 *)((long)puVar4 + 0x4b) = 0;
  puVar4[2] = &DAT_0407ebb1;
  puVar4[3] = &PTR_LAB_048f9700;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  *(undefined4 *)(puVar4 + 0x11) = 0;
  *(undefined1 *)((long)puVar4 + 0x8e) = 0;
  *puVar4 = &PTR_LAB_04b7b3f8;
  puVar4[1] = puVar3 + 0x10;
  *(undefined2 *)((long)puVar4 + 0x8c) = 0x101;
  FUN_02a1e8f0(puVar4,param_2);
  *(undefined4 *)(puVar4 + 0xc) = *param_3;
  *(undefined4 *)((long)puVar4 + 100) = param_3[1];
  *(undefined4 *)(puVar4 + 0xd) = param_3[2];
  *(undefined4 *)((long)puVar4 + 0x6c) = param_3[3];
  *(undefined4 *)(puVar4 + 0xe) = param_3[4];
  *(undefined4 *)((long)puVar4 + 0x74) = param_3[5];
  *(undefined4 *)(puVar4 + 0xf) = param_3[6];
  *(undefined4 *)((long)puVar4 + 0x7c) = param_3[7];
  *(undefined4 *)(puVar4 + 0x10) = param_3[8];
  *(undefined4 *)((long)puVar4 + 0x84) = param_3[9];
  uVar1 = param_3[10];
  *(undefined4 *)((long)puVar4 + 0x8b) = *(undefined4 *)((long)param_3 + 0x2b);
  *(undefined4 *)(puVar4 + 0x11) = uVar1;
  lVar10 = *param_1;
  plVar7 = (long *)((long)*(int *)((long)param_1 + 0x14) + (long)puVar4);
  *param_1 = (long)plVar7;
  *plVar7 = lVar10;
  plVar7[1] = (long)param_1;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar7;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return 1;
}

