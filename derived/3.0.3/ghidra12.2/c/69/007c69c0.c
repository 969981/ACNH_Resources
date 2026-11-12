
void FUN_007c69c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar5 = PTR_DAT_04bb2020;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "AsMgrHeap";
  local_58 = (undefined *)FUN_038c6d48(0x44cccd,&local_58,param_2,8,1,1);
  puVar6 = PTR_DAT_04bb2118;
  *(undefined **)(param_1 + 0x78) = local_58;
  local_38 = 0x6b;
  pcStack_50 = *(char **)(*(long *)puVar6 + 0x540);
  local_48 = 0;
  uStack_40 = 0x3000000060;
  FUN_03ecf03c(0);
  puVar6 = PTR_DAT_04bb4a70;
  FUN_03ecf190(*(undefined8 *)PTR_DAT_04bb4a70,&local_58);
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "BridgePattern";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 6) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (4 < (int)uVar9) goto LAB_007c6b5c;
    }
    puVar12 = (&PTR_DAT_04914378)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 6);
LAB_007c6b5c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "CatchInsectType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_049143a8;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Other_049143ae;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "ChangeOutfitParts";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_049143c8;
  *(undefined4 *)(puVar1 + 1) = 0;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "ChangeStick";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c6dac;
    }
    puVar12 = (&PTR_s_ToCoordinateOn_04914428)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c6dac:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "CharaKind";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Player_04914448;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914450;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "CharaLocalDirection";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c6f70;
    }
    puVar12 = (&PTR_s_Front_04914488)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c6f70:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) =
       "ConcentrationInterestType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 6) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (4 < (int)uVar9) goto LAB_007c706c;
    }
    puVar12 = (&PTR_s_Level1_049144d8)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 6);
LAB_007c706c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "ConcentrationType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914508;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Normal_0491450e;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914516;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "CountdownStickInfo";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c727c;
    }
    puVar12 = (&PTR_DAT_04914560)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c727c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "Curtain";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914580;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Double_04914586;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Blind_0491458e;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "EyeDirType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 5) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (3 < (int)uVar9) goto LAB_007c748c;
    }
    puVar12 = (&PTR_DAT_049145d0)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 5);
LAB_007c748c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "FacilitySeason";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 6) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (4 < (int)uVar9) goto LAB_007c7580;
    }
    puVar12 = (&PTR_s_Spring_04914630)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 6);
LAB_007c7580:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(undefined **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = &DAT_0409b281;
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 7) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (5 < (int)uVar9) goto LAB_007c767c;
    }
    puVar12 = (&PTR_s_cNormal_04914698)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 7);
LAB_007c767c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(undefined **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = &DAT_04066e8c;
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_049146d0;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Right_049146d6;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "FtrActionTiming";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 9) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (7 < (int)uVar9) goto LAB_007c7840;
    }
    puVar12 = (&PTR_s_JustSit_04914770)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 9);
LAB_007c7840:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "FtrChest";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c793c;
    }
    puVar12 = (&PTR_DAT_049147d8)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c793c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "FtrRotateDirection";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Right_049147f8;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_049147ff;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "GuitarStrokeType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Unknown_04914818;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Guitar3Beat_04914821;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Guitar4Beat_0491482e;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "GyroActionID";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c7c1c;
    }
    puVar12 = (&PTR_DAT_04914880)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c7c1c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "HandTool";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0x6b) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (0x69 < (int)uVar9) goto LAB_007c7d10;
    }
    puVar12 = (&PTR_DAT_04912c68)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0x6b);
LAB_007c7d10:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "HumanXLinkKey";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 8) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (6 < (int)uVar9) goto LAB_007c7e0c;
    }
    puVar12 = (&PTR_s_PickUp_049148f0)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 8);
LAB_007c7e0c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "IconPickupType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0xc) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (10 < (int)uVar9) goto LAB_007c7f00;
    }
    puVar12 = (&PTR_DAT_04914970)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0xc);
LAB_007c7f00:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "LipSyncType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0xb) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (9 < (int)uVar9) goto LAB_007c7ffc;
    }
    puVar12 = (&PTR_s_cUnknown_04914a20)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0xb);
LAB_007c7ffc:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "LookIKControllType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Disable_04914a78;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Enable_04914a81;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "LowerBodyAnimType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 6) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (4 < (int)uVar9) goto LAB_007c81c0;
    }
    puVar12 = (&PTR_s_Stand_04914ac0)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 6);
LAB_007c81c0:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "MailBoxType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c82bc;
    }
    puVar12 = (&PTR_s_Bottom_04914b10)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c82bc:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "MouthAnimType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Texture_04914b30;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Skeltal_04914b39;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_TexSkeltal_04914b42;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "MusicKimeInfo";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914b68;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_PreBeat_04914b6e;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914b77;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "NpcLooks";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 9) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (7 < (int)uVar9) goto LAB_007c85e0;
    }
    puVar12 = (&PTR_DAT_04914bc0)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 9);
LAB_007c85e0:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "ObjectFanState";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &DAT_04914c08;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914c0d;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_OnSwing_04914c11;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "PlantBushType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 7) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (5 < (int)uVar9) goto LAB_007c87f0;
    }
    puVar12 = (&PTR_s_Azalea_04914c78)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 7);
LAB_007c87f0:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "PlantTreeType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c88ec;
    }
    puVar12 = (&PTR_DAT_04914cd0)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c88ec:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "PoseDir";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = s_Front_04914cf0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914cf7;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Right_04914cfd;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "PutawayAnim";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 6) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (4 < (int)uVar9) goto LAB_007c8afc;
    }
    puVar12 = (&PTR_DAT_04914d48)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 6);
LAB_007c8afc:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "SocialType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914d78;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_Normal_04914d7d;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04914d85;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "SpNpcType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0x2e) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (0x2c < (int)uVar9) goto LAB_007c8d0c;
    }
    puVar12 = (&PTR_DAT_04914f18)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0x2e);
LAB_007c8d0c:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "Stairs";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04915088;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_0491508c;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "StructureDoor";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0x1c) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (0x1a < (int)uVar9) goto LAB_007c8ed0;
    }
    puVar12 = (&PTR_DAT_049151b8)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0x1c);
LAB_007c8ed0:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "SwimSpeedType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c8fcc;
    }
    uVar13 = (&DAT_049152b8)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = uVar13;
  } while (uVar9 + 1 != 4);
LAB_007c8fcc:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "TalkMouthType";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c90c0;
    }
    puVar12 = (&PTR_DAT_049152f8)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c90c0:
  lVar11 = *(long *)puVar6;
  uVar10 = 0;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "TrueFalse";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = s_False_04915318;
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_0491531f;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "WeatherFourSeason";
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 4) break;
      uVar3 = uVar4;
      if (*(uint *)(lVar11 + 0x128) <= uVar4) {
        uVar3 = 0;
      }
      puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
      uVar3 = puVar2[4];
      puVar2[4] = uVar3 + 1;
      if (*puVar2 <= uVar3) {
        uVar3 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (2 < (int)uVar9) goto LAB_007c928c;
    }
    puVar12 = (&PTR_s_Spring_04915358)[uVar10];
    uVar3 = uVar4;
    if (*(uint *)(lVar11 + 0x128) <= uVar4) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar11 + 0x130) + (long)(int)uVar3 * 0x20);
    uVar3 = puVar2[4];
    puVar2[4] = uVar3 + 1;
    if (*puVar2 <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar3 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 4);
LAB_007c928c:
  lVar11 = *(long *)puVar6;
  uVar4 = *(uint *)(lVar11 + 0x138);
  uVar10 = 0;
  uVar9 = uVar4;
  if (*(uint *)(lVar11 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  *(char **)(*(long *)(lVar11 + 0x130) + (long)(int)uVar9 * 0x20 + 0x18) = "WeatherType";
  lVar14 = *(long *)puVar6;
  *(int *)(lVar11 + 0x138) = *(int *)(lVar11 + 0x138) + 1;
  uVar9 = uVar4;
  if (*(uint *)(lVar14 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(lVar14 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar3 = puVar2[4];
  uVar9 = uVar3;
  if (*puVar2 <= uVar3) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  puVar2[4] = uVar3 + 1;
  *puVar1 = &DAT_04915378;
  *(undefined4 *)(puVar1 + 1) = 0;
  uVar9 = uVar4;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar9 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar9 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_0491537e;
  *(undefined4 *)(puVar1 + 1) = 1;
  if (*(uint *)(*(long *)puVar6 + 0x128) <= uVar4) {
    uVar4 = 0;
  }
  puVar2 = (uint *)(*(long *)(*(long *)puVar6 + 0x130) + (long)(int)uVar4 * 0x20);
  uVar9 = puVar2[4];
  puVar2[4] = uVar9 + 1;
  if (*puVar2 <= uVar9) {
    uVar9 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(puVar2 + 2) + (long)(int)uVar9 * 0x10);
  *puVar1 = &DAT_04915384;
  *(undefined4 *)(puVar1 + 1) = 2;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0x4f) break;
      uVar4 = *(uint *)(lVar11 + 0x120);
      *(uint *)(lVar11 + 0x120) = uVar4 + 1;
      if (*(uint *)(lVar11 + 0x110) <= uVar4) {
        uVar4 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x118) + (long)(int)uVar4 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (0x4d < (int)uVar9) goto LAB_007c943c;
    }
    uVar4 = *(uint *)(lVar11 + 0x120);
    puVar12 = (&PTR_s_AirplaneStartRun_04915a90)[uVar10];
    *(uint *)(lVar11 + 0x120) = uVar4 + 1;
    if (*(uint *)(lVar11 + 0x110) <= uVar4) {
      uVar4 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x118) + (long)(int)uVar4 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0x4f);
LAB_007c943c:
  uVar10 = 0;
  do {
    while( true ) {
      lVar11 = *(long *)puVar6;
      uVar9 = (uint)uVar10;
      if (uVar9 < 0x3d) break;
      uVar4 = *(uint *)(lVar11 + 0x108);
      *(uint *)(lVar11 + 0x108) = uVar4 + 1;
      if (*(uint *)(lVar11 + 0xf8) <= uVar4) {
        uVar4 = 0;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x100) + (long)(int)uVar4 * 0x10);
      *(uint *)(puVar1 + 1) = uVar9;
      uVar10 = (ulong)(uVar9 + 1);
      *puVar1 = &DAT_0407ebb1;
      if (0x3b < (int)uVar9) goto LAB_007c94cc;
    }
    uVar4 = *(uint *)(lVar11 + 0x108);
    puVar12 = (&PTR_s_ActionFrame_04916198)[uVar10];
    *(uint *)(lVar11 + 0x108) = uVar4 + 1;
    if (*(uint *)(lVar11 + 0xf8) <= uVar4) {
      uVar4 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x100) + (long)(int)uVar4 * 0x10);
    *(uint *)(puVar1 + 1) = uVar9;
    uVar10 = (ulong)(uVar9 + 1);
    *puVar1 = puVar12;
  } while (uVar9 + 1 != 0x3d);
LAB_007c94cc:
  *(uint *)(*(long *)puVar6 + 0xe4) = *(uint *)(*(long *)puVar6 + 0xe4) | 0x100000;
  lVar11 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar7 = malloc(0x9000);
  }
  else {
    plVar7 = *(long **)(param_1 + 0x78);
    if (plVar7 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar14 != 0) {
        plVar7 = (long *)(lVar14 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_007c9584;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x9000,8);
  }
  if (plVar7 != (long *)0x0) {
    lVar11 = 0x1fe;
    *(long **)(param_1 + 0x10) = plVar7;
    *(undefined4 *)(param_1 + 0x24) = 0x200;
    *plVar7 = (long)(plVar7 + 9);
    plVar8 = plVar7 + 9;
    do {
      lVar11 = lVar11 + -2;
      *plVar8 = (long)(plVar8 + 9);
      plVar8[9] = (long)(plVar8 + 0x12);
      plVar8 = plVar8 + 0x12;
    } while (lVar11 != 0);
    plVar7[0x11f7] = 0;
    *(long **)(param_1 + 0x18) = plVar7;
  }
LAB_007c9584:
  local_58 = puVar5 + 0x10;
  pcStack_50 = "ParkDefault";
  FUN_007c95d0(param_1,&local_58,0);
  FUN_038533ec(param_1 + 0x28,*(undefined8 *)(param_1 + 0x78));
  return;
}

