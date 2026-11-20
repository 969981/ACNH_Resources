
void FUN_03f21e94(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x5c) != 2) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar4 + 0x260) != '\0') {
      lVar5 = *(long *)(lVar4 + 0xb8);
      if (*(char *)(lVar5 + 0x15) == '\0') {
        lVar5 = *(long *)(lVar5 + 0x18);
      }
      else {
        lVar5 = (long)(DAT_05ae7888 *
                       (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                1000 + *(long *)(lVar5 + 0x18);
      }
      if ((*(long *)(lVar4 + 200) + *(long *)(lVar4 + 0xc0)) - *(long *)(lVar4 + 0xf8) <=
          lVar5 - *(long *)(lVar4 + 0xb0)) {
        return;
      }
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = FUN_03f1e960();
      iVar1 = *(int *)(*param_2 + 0x10);
      if (iVar1 == 4) {
        uVar2 = FUN_006bd550(*(undefined8 *)(*param_2 + 0x18),0);
        fVar6 = (float)FUN_03f10010(uVar3,uVar2,0);
      }
      else if (iVar1 == 3) {
        fVar6 = (float)FUN_03f0fd20(uVar3,0);
      }
      else {
        fVar6 = 0.0;
        if (iVar1 == 1) {
          fVar6 = (float)FUN_03f0f8f0(uVar3,0);
        }
      }
      fVar7 = 0.0;
      if (fVar6 != 3.4028235e+38) {
        fVar7 = fVar6;
      }
      *(float *)(param_2 + 1) = fVar7;
      *(float *)((long)param_2 + 0xc) = fVar7;
                    /* WARNING: Could not recover jumptable at 0x03f22004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x28))(*(long **)(param_1 + 0x30),param_2);
      return;
    }
  }
  return;
}

