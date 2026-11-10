
char * FUN_003212d0(long param_1,long param_2,undefined4 param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  pcVar4 = (char *)(**(code **)(**(long **)(*(long *)(param_1 + 0x280) + 0x110) + 0x10))();
  if (pcVar4 == (char *)0x0) {
    return (char *)0x0;
  }
  if (0 < *(int *)(param_2 + 0x340)) {
    *(undefined8 *)(pcVar4 + 0x480) =
         *(undefined8 *)
          (*(long *)(param_1 + 0x280) + (ulong)(*(int *)(param_2 + 0x340) - 1) * 8 + 0xd0);
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x964);
  if (iVar2 == 0) {
    if (*(char *)(*(long *)(param_1 + 0x280) + 0x38) != '\0') {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x280) + 0x88);
      goto LAB_0032136c;
    }
  }
  else {
    uVar6 = (ulong)(iVar2 + 8);
    if (*(char *)(*(long *)(param_1 + 0x280) + uVar6 + 0x30) == '\0') {
      FUN_0032c410("CustomShader Callback is not established. CustomShaderID : %d\n");
      iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x9a0);
      goto joined_r0x0032137c;
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x280) + uVar6 * 8 + 0x48);
LAB_0032136c:
    *(undefined8 *)(pcVar4 + 0x478) = uVar7;
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x9a0);
joined_r0x0032137c:
  if (0 < iVar2) {
    if (*(long *)(param_2 + 0x318) == 0) {
      *(long *)(pcVar4 + 0x78) = param_1;
      FUN_0032c600(**(long **)(pcVar4 + 0x4d0) + 0x14,pcVar4,0x10);
    }
    else if (*(char *)(*(long *)(param_1 + 0x280) + (ulong)(iVar2 - 1) + 0x30) == '\0') {
      FUN_0032c410("CustomAction Callback is not established. CustomActionID : %d\n");
    }
    else {
      *(undefined8 *)(pcVar4 + 0x470) =
           *(undefined8 *)(*(long *)(param_1 + 0x280) + (ulong)(iVar2 - 1) * 8 + 0x48);
    }
  }
  uVar6 = FUN_0031c598(pcVar4,*(undefined8 *)(param_1 + 0x10),param_1,param_1 + 0x288,param_2,
                       param_3,*(undefined8 *)(param_1 + 0x1f0),param_4);
  if ((uVar6 & 1) == 0) {
    cVar3 = pcVar4[6];
    if (cVar3 != '\0') {
      FUN_0032c410("Emitter Initialization Failed.\n");
    }
    (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x280) + 0x128))();
    FUN_0031df0c(pcVar4,*(undefined8 *)(param_1 + 0x10),cVar3 == '\0');
    FUN_0031d9ac(pcVar4);
    plVar5 = *(long **)(*(long *)(param_1 + 0x280) + 0x110);
    (**(code **)(*plVar5 + 0x18))(plVar5,pcVar4);
    (**(code **)(**(long **)(*(long *)(param_1 + 0x280) + 0x128) + 8))();
    return (char *)0x0;
  }
  FUN_0031e200(pcVar4,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x7a4));
  *(int *)(pcVar4 + 0x20) = param_5;
  if (*pcVar4 == '\0') {
    if (*(long *)(param_1 + 0x168) == 0) {
      *(char **)(param_1 + 0x168) = pcVar4;
      pcVar4[0x80] = '\0';
      pcVar4[0x81] = '\0';
      pcVar4[0x82] = '\0';
      pcVar4[0x83] = '\0';
      pcVar4[0x84] = '\0';
      pcVar4[0x85] = '\0';
      pcVar4[0x86] = '\0';
      pcVar4[0x87] = '\0';
      pcVar4[0x88] = '\0';
      pcVar4[0x89] = '\0';
      pcVar4[0x8a] = '\0';
      pcVar4[0x8b] = '\0';
      pcVar4[0x8c] = '\0';
      pcVar4[0x8d] = '\0';
      pcVar4[0x8e] = '\0';
      pcVar4[0x8f] = '\0';
      lVar8 = *(long *)(param_1 + 0x160);
    }
    else {
      *(char **)(*(long *)(param_1 + 0x168) + 0x80) = pcVar4;
      *(undefined8 *)(pcVar4 + 0x88) = *(undefined8 *)(param_1 + 0x168);
      *(char **)(param_1 + 0x168) = pcVar4;
      pcVar4[0x80] = '\0';
      pcVar4[0x81] = '\0';
      pcVar4[0x82] = '\0';
      pcVar4[0x83] = '\0';
      pcVar4[0x84] = '\0';
      pcVar4[0x85] = '\0';
      pcVar4[0x86] = '\0';
      pcVar4[0x87] = '\0';
      lVar8 = *(long *)(param_1 + 0x160);
    }
    if (lVar8 == 0) {
      *(char **)(param_1 + 0x160) = pcVar4;
    }
  }
  else {
    lVar8 = param_4 + (long)param_5 * 8;
    *(long *)(pcVar4 + 0x5e0) = param_4;
    puVar1 = (undefined8 *)(lVar8 + 0x558);
    lVar8 = *(long *)(lVar8 + 0x558);
    if (lVar8 == 0) {
      *puVar1 = pcVar4;
      pcVar4[0x80] = '\0';
      pcVar4[0x81] = '\0';
      pcVar4[0x82] = '\0';
      pcVar4[0x83] = '\0';
      pcVar4[0x84] = '\0';
      pcVar4[0x85] = '\0';
      pcVar4[0x86] = '\0';
      pcVar4[0x87] = '\0';
      pcVar4[0x88] = '\0';
      pcVar4[0x89] = '\0';
      pcVar4[0x8a] = '\0';
      pcVar4[0x8b] = '\0';
      pcVar4[0x8c] = '\0';
      pcVar4[0x8d] = '\0';
      pcVar4[0x8e] = '\0';
      pcVar4[0x8f] = '\0';
      param_4 = param_4 + (long)param_5 * 8;
      lVar8 = *(long *)(param_4 + 0x4d8);
    }
    else {
      *(char **)(lVar8 + 0x80) = pcVar4;
      *(undefined8 *)(pcVar4 + 0x88) = *puVar1;
      *puVar1 = pcVar4;
      param_4 = param_4 + (long)param_5 * 8;
      pcVar4[0x80] = '\0';
      pcVar4[0x81] = '\0';
      pcVar4[0x82] = '\0';
      pcVar4[0x83] = '\0';
      pcVar4[0x84] = '\0';
      pcVar4[0x85] = '\0';
      pcVar4[0x86] = '\0';
      pcVar4[0x87] = '\0';
      lVar8 = *(long *)(param_4 + 0x4d8);
    }
    if (lVar8 == 0) {
      *(char **)(param_4 + 0x4d8) = pcVar4;
    }
  }
  *(undefined4 *)(pcVar4 + 0x14) = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return pcVar4;
}

