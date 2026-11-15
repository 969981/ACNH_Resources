
void FUN_02051f70(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  float fVar11;
  byte local_48 [4];
  undefined4 local_44;
  undefined2 local_40;
  byte local_3c [4];
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_14 [4];
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_02507c6c(local_3c,1,1,1,0);
    uVar9 = (uint)local_3c[0];
    *(undefined4 *)(param_1 + 0x148) = 0;
    local_44 = local_38;
    local_48[0] = 0xff;
    if (local_3c[0] < 8) {
      local_48[0] = local_3c[0];
    }
    local_40 = local_34;
    if (local_3c[0] < 8) {
      while( true ) {
        local_14[0] = (undefined1)uVar9;
        fVar11 = (float)FUN_02051df4(param_1,local_14);
        if (*(float *)(param_1 + 0x148) < fVar11) {
          *(float *)(param_1 + 0x148) = fVar11;
        }
        uVar3 = (ulong)uVar9;
        do {
          uVar10 = uVar3;
          if (uVar10 == 7) goto LAB_02051fd4;
          uVar4 = FUN_02507924(local_48,&DAT_0548e169 + uVar10);
          uVar3 = uVar10 + 1;
        } while ((uVar4 & 1) == 0);
        uVar9 = (uint)(byte)(&DAT_0548e169)[uVar10];
        if (7 < uVar9) break;
        local_48[0] = (&DAT_0548e169)[uVar10];
      }
    }
  }
LAB_02051fd4:
  uVar9 = *(uint *)(param_1 + 8);
  if ((uVar9 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar8 = (undefined1 *)(param_1 + 0x21);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar9 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar9;
    if (uVar9 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
      uVar1 = uVar9;
      if (uVar6 <= uVar9) {
        uVar1 = 0;
      }
      puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        (*(code *)*puVar7)();
        uVar9 = *(uint *)(param_1 + 8);
        goto LAB_02052040;
      }
      *puVar8 = 0;
      goto LAB_020520cc;
    }
    *puVar8 = 0;
  }
  else {
LAB_02052040:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar9 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x30);
LAB_020520cc:
      if (uVar6 <= uVar9) {
        uVar9 = 0;
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar9 * 0x40);
      if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(param_1 + 0x21) != '\0'))
      goto LAB_02052100;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
LAB_02052100:
  *(undefined2 *)(param_1 + 0x14e) = 0;
  return;
}

