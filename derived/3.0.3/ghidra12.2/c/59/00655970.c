
void FUN_00655970(long param_1,ulong param_2,uint param_3,code *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  uVar9 = param_2 & 0xffffffff;
  do {
    uVar11 = (int)uVar9 + param_3;
    uVar2 = (int)uVar11 >> 1;
    puVar1 = (undefined4 *)
             (param_1 +
             ((-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3) -
             ((long)((ulong)uVar11 << 0x20) >> 0x21)));
    uStack_70 = *puVar1;
    uVar7 = (ulong)param_3;
    uStack_6c = (undefined3)((uint)*(undefined4 *)((long)puVar1 + 3) >> 8);
    uVar12 = uVar9;
    do {
      puVar1 = (undefined4 *)
               (param_1 +
               ((-(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) - (long)(int)uVar12));
      do {
        puVar8 = puVar1;
        uVar5 = (*param_4)(puVar8,&uStack_70);
        uVar11 = (uint)uVar12;
        uVar12 = (ulong)(uVar11 + 1);
        puVar1 = (undefined4 *)((long)puVar8 + 7);
      } while ((uVar5 & 1) != 0);
      iVar6 = (int)uVar7;
      uVar12 = uVar7 << 3;
      uVar5 = uVar7 >> 0x1f;
      uVar7 = (ulong)(iVar6 + 1);
      puVar1 = (undefined4 *)(param_1 + ((-uVar5 & 0xfffffff800000000 | uVar12) - (long)iVar6));
      do {
        puVar10 = puVar1;
        uVar12 = (*param_4)(&uStack_70,puVar10);
        iVar6 = (int)uVar7;
        uVar2 = iVar6 - 1;
        uVar7 = (ulong)uVar2;
        puVar1 = (undefined4 *)((long)puVar10 + -7);
      } while ((uVar12 & 1) != 0);
      if ((int)uVar11 <= (int)uVar2) {
        if (uVar11 != uVar2) {
          uVar3 = *puVar10;
          uStack_64 = (undefined3)((uint)*(undefined4 *)((long)puVar10 + 3) >> 8);
          uVar4 = *puVar8;
          *(undefined4 *)((long)puVar10 + 3) = *(undefined4 *)((long)puVar8 + 3);
          *puVar10 = uVar4;
          uStack_68._3_1_ = (undefined1)((uint)uVar3 >> 0x18);
          *(uint *)((long)puVar8 + 3) = CONCAT31(uStack_64,uStack_68._3_1_);
          *puVar8 = uVar3;
          uStack_68 = uVar3;
        }
        uVar7 = (ulong)(iVar6 - 2);
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar11;
    } while ((int)uVar11 <= (int)uVar7);
    if ((int)uVar9 < (int)uVar7) {
      FUN_00655970(param_1,uVar9,uVar7,param_4);
    }
    uVar9 = uVar12;
  } while ((int)uVar11 < (int)param_3);
  return;
}

