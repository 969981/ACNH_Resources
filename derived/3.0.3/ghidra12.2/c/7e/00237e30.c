
void FUN_00237e30(long *param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  if ((char)param_1[1] == '\0') {
    *param_3 = 0;
LAB_00237ea8:
    *param_4 = 0;
    return;
  }
  if (*(int *)(param_2 + 0x5fc) != -1) {
    if ((param_1[0x4c] != 0) &&
       (uVar5 = FUN_0021fe7c(param_1[0x4c] + 0x70,param_2 + 0x608), (uVar5 & 1) != 0)) {
      *param_3 = 0;
      *param_4 = 1;
      return;
    }
    *param_3 = 1;
    goto LAB_00237ea8;
  }
  FUN_0021f4e0(auStack_260);
  FUN_0021f4e0(auStack_240);
  FUN_0021f4e0(auStack_220);
  FUN_0021f4e0(auStack_200);
  FUN_0021f4e0(auStack_1e0);
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0();
  FUN_0021f4e0(auStack_a0);
  FUN_0021f4e0(auStack_80);
  uVar4 = FUN_002380f4(param_1,auStack_260,param_2);
  uVar5 = (ulong)uVar4;
  if (uVar4 == 0) {
    uVar8 = 0;
    goto LAB_0023804c;
  }
  lVar9 = param_1[0x4c];
  if (lVar9 != 0) {
    puVar10 = auStack_260;
    do {
      uVar6 = FUN_0021fe7c(lVar9 + 0x50,puVar10);
      if ((uVar6 & 1) != 0) goto LAB_0023803c;
      uVar5 = uVar5 - 1;
      puVar10 = puVar10 + 0x20;
    } while (uVar5 != 0);
  }
  uVar2 = uVar4 - 1;
  if (uVar2 == 0) {
LAB_0023801c:
    uVar5 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar5 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto LAB_0023804c;
    }
  }
  else {
    uVar5 = 0;
    bVar3 = false;
    do {
      lVar9 = uVar5 * 0x20;
      uVar5 = uVar5 + 1;
      uVar6 = uVar5 & 0xffffffff;
      do {
        uVar7 = FUN_0021fe7c(auStack_260 + lVar9,auStack_260 + uVar6 * 0x20);
        if ((uVar7 & 1) != 0) goto LAB_00238010;
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 <= uVar2);
      bVar3 = uVar2 <= uVar5;
    } while (uVar5 != uVar2);
LAB_00238010:
    if (bVar3) goto LAB_0023801c;
  }
LAB_0023803c:
  uVar8 = 0;
LAB_0023804c:
  *param_3 = (short)uVar4;
  *param_4 = uVar8;
  FUN_0021f584(auStack_80);
  FUN_0021f584(auStack_a0);
  FUN_0021f584(auStack_c0);
  FUN_0021f584(auStack_e0);
  FUN_0021f584(auStack_100);
  FUN_0021f584(auStack_120);
  FUN_0021f584(auStack_140);
  FUN_0021f584(auStack_160);
  FUN_0021f584(auStack_180);
  FUN_0021f584(auStack_1a0);
  FUN_0021f584(auStack_1c0);
  FUN_0021f584(auStack_1e0);
  FUN_0021f584(auStack_200);
  FUN_0021f584(auStack_220);
  FUN_0021f584(auStack_240);
  FUN_0021f584(auStack_260);
  return;
}

