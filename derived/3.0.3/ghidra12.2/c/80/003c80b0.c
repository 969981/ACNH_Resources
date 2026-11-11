
void FUN_003c80b0(long param_1)

{
  short sVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  
  lVar5 = *(long *)(param_1 + 0x140);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x148);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x150);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x158);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x170);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x178);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x180);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x188);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 400);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x198);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x1a0);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x1a8);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x1b0);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  lVar5 = *(long *)(param_1 + 0x1b8);
  if (lVar5 != 0) {
    FUN_003bdc90(lVar5,0x7f);
    FUN_003bdd20(lVar5);
  }
  puVar3 = PTR_DAT_04bd03d8;
  iVar7 = 0;
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 == 0) goto LAB_003c8380;
LAB_003c82c0:
  if (*(int *)puVar3 <= iVar7) {
    return;
  }
  *(int *)(param_1 + 0x100) = iVar4 + -1;
  sVar1 = *(short *)(param_1 + 0x118);
  if (*(short *)(param_1 + 0x116) <= sVar1) goto LAB_003c82ec;
  do {
    *(short *)(param_1 + 0x118) = sVar1 + 1;
LAB_003c82ec:
    do {
      bVar2 = false;
      lVar5 = 0x140;
      do {
        lVar6 = *(long *)(param_1 + lVar5);
        if (lVar6 != 0) {
          FUN_003bdd60(lVar6);
          iVar4 = FUN_003bddf0(lVar6,0);
          if ((iVar4 < 0) && (*(long *)(param_1 + lVar5) != 0)) {
            FUN_003bdc00();
            (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
                      (*(long **)(param_1 + 0x128),*(undefined8 *)(param_1 + lVar5));
            *(undefined8 *)(param_1 + lVar5) = 0;
          }
          bVar2 = (bool)(*(char *)(lVar6 + 9) != '\0' | bVar2);
        }
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0x1c0);
      if (!bVar2) {
        FUN_003c62e8(param_1);
        *(undefined1 *)(param_1 + 0x3b) = 1;
        return;
      }
      iVar7 = iVar7 + 1;
      *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
      iVar4 = *(int *)(param_1 + 0x100);
      if (iVar4 != 0) goto LAB_003c82c0;
LAB_003c8380:
      fVar8 = (*(float *)(param_1 + 0xf8) *
              (float)((uint)*(ushort *)(param_1 + 0x112) * (uint)*(byte *)(param_1 + 0x111))) /
              60000.0;
      if (*(float *)(param_1 + 0x104) * fVar8 < 1.0) {
        *(undefined4 *)(param_1 + 0x104) = 0;
        return;
      }
      if (*(int *)puVar3 <= iVar7) {
        return;
      }
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + -1.0 / fVar8;
      sVar1 = *(short *)(param_1 + 0x118);
    } while (*(short *)(param_1 + 0x116) <= sVar1);
  } while( true );
}

