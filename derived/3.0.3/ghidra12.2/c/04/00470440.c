
void FUN_00470440(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if ((int)uVar4 < (int)param_1[1] * 2) {
    FUN_0044b920(param_1,param_2,uVar4 * 2 + 2);
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  lVar7 = *param_3;
  uVar1 = (int)lVar7 * -0x61c8864f;
  uVar2 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar6 = (ulong)((uVar1 + (uVar1 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar4);
  lVar5 = *param_1;
  lVar8 = *(long *)(lVar5 + uVar6 * 0x10);
  do {
    if (lVar8 == -1) {
      iVar3 = 1;
LAB_004704f8:
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
      uVar6 = -(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4;
      *(long *)(lVar5 + uVar6) = *param_3;
      *(undefined8 *)(*param_1 + uVar6 + 8) = *param_4;
      return;
    }
    if (lVar8 == lVar7) {
      iVar3 = 0;
      goto LAB_004704f8;
    }
    uVar6 = (ulong)((int)uVar6 + 1U & uVar4);
    lVar8 = *(long *)(lVar5 + uVar6 * 0x10);
  } while( true );
}

