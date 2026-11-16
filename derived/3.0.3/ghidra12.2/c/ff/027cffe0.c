
void FUN_027cffe0(long param_1,undefined8 param_2,long param_3,int *param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = 0;
  uVar6 = 0;
  lVar7 = 1;
  do {
    lVar5 = DAT_053274a0;
    lVar1 = param_1 + lVar8;
    uVar2 = FUN_0277d6c4(lVar1 + 0x14);
    if (DAT_053274a0 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
          (uVar3 = FUN_0277d7b4(lVar1 + 0x14,param_2), (uVar3 & 1) != 0)) &&
         (((*(int *)(param_3 + 8) == (int)*(char *)(lVar1 + 0x1c) &&
           (*(int *)(param_3 + 0xc) == (int)*(char *)(lVar1 + 0x1d))) &&
          ((int)*(char *)(lVar1 + 0x1f) == *param_4)))) {
        if ((int)lVar8 != 0x1a4) {
          puVar4 = (undefined1 *)(lVar1 + 0x2b);
          if (uVar6 < 0x23) {
            uVar6 = 0x22;
          }
          lVar7 = uVar6 + lVar7;
          do {
            lVar7 = lVar7 + -1;
            *(undefined2 *)(puVar4 + -0xf) = *(undefined2 *)(puVar4 + -3);
            *(undefined4 *)(puVar4 + -0x17) = *(undefined4 *)(puVar4 + -0xb);
            *(undefined4 *)(puVar4 + -0x13) = *(undefined4 *)(puVar4 + -7);
            puVar4[-0xd] = puVar4[-1];
            puVar4[-0xc] = *puVar4;
            puVar4 = puVar4 + 0xc;
          } while (lVar7 != 0);
        }
        *(undefined4 *)(param_1 + 0x1b8) = 0xfffe;
        *(undefined8 *)(param_1 + 0x1bc) = 0;
        FUN_0277d4ac(param_1 + 0x1b8);
        *(undefined4 *)(param_1 + 0x1c0) = 0xffff;
        return;
      }
    }
    lVar8 = lVar8 + 0xc;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + -1;
    if (lVar8 == 0x1b0) {
      return;
    }
  } while( true );
}

