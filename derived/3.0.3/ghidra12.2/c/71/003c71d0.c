
/* WARNING: Removing unreachable block (ram,0x003c73c0) */
/* WARNING: Removing unreachable block (ram,0x003c73c4) */
/* WARNING: Removing unreachable block (ram,0x003c73cc) */
/* WARNING: Removing unreachable block (ram,0x003c73e4) */
/* WARNING: Removing unreachable block (ram,0x003c73ec) */
/* WARNING: Removing unreachable block (ram,0x003c73fc) */
/* WARNING: Removing unreachable block (ram,0x003c7410) */
/* WARNING: Removing unreachable block (ram,0x003c7414) */
/* WARNING: Removing unreachable block (ram,0x003c741c) */
/* WARNING: Removing unreachable block (ram,0x003c7434) */
/* WARNING: Removing unreachable block (ram,0x003c743c) */
/* WARNING: Removing unreachable block (ram,0x003c744c) */
/* WARNING: Removing unreachable block (ram,0x003c7460) */
/* WARNING: Removing unreachable block (ram,0x003c7464) */
/* WARNING: Removing unreachable block (ram,0x003c746c) */
/* WARNING: Removing unreachable block (ram,0x003c7484) */
/* WARNING: Removing unreachable block (ram,0x003c748c) */
/* WARNING: Removing unreachable block (ram,0x003c749c) */
/* WARNING: Removing unreachable block (ram,0x003c74b0) */
/* WARNING: Removing unreachable block (ram,0x003c74b4) */
/* WARNING: Removing unreachable block (ram,0x003c74bc) */
/* WARNING: Removing unreachable block (ram,0x003c74d4) */
/* WARNING: Removing unreachable block (ram,0x003c74dc) */
/* WARNING: Removing unreachable block (ram,0x003c74ec) */
/* WARNING: Removing unreachable block (ram,0x003c7500) */
/* WARNING: Removing unreachable block (ram,0x003c7504) */
/* WARNING: Removing unreachable block (ram,0x003c750c) */
/* WARNING: Removing unreachable block (ram,0x003c7524) */
/* WARNING: Removing unreachable block (ram,0x003c752c) */
/* WARNING: Removing unreachable block (ram,0x003c753c) */
/* WARNING: Removing unreachable block (ram,0x003c7550) */
/* WARNING: Removing unreachable block (ram,0x003c7554) */
/* WARNING: Removing unreachable block (ram,0x003c755c) */
/* WARNING: Removing unreachable block (ram,0x003c7574) */
/* WARNING: Removing unreachable block (ram,0x003c757c) */

void FUN_003c71d0(long param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_FUN_04bd0448;
  if (param_2 != 0) {
    uVar6 = *param_4;
    uVar4 = 0;
    uVar5 = param_2;
    do {
      if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,0);
      }
      if (0xe < uVar4) break;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
    uVar6 = param_4[1];
    uVar4 = 0;
    uVar5 = param_2;
    do {
      if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,1);
      }
      if (0xe < uVar4) break;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
    uVar6 = param_4[2];
    uVar4 = 0;
    uVar5 = param_2;
    do {
      if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,2);
      }
      if (0xe < uVar4) break;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
    uVar6 = param_4[3];
    uVar4 = 0;
    uVar5 = param_2;
    do {
      if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,3);
      }
      if (0xe < uVar4) break;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
    uVar6 = param_4[4];
    uVar4 = 0;
    uVar5 = param_2;
    do {
      if (((uVar5 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,4);
      }
      if (0xe < uVar4) break;
      uVar4 = uVar4 + 1;
      bVar1 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar1);
    uVar6 = param_4[5];
    uVar4 = 0;
    do {
      if (((param_2 & 1) != 0) && (lVar3 = *(long *)(param_1 + 0x140 + uVar4 * 8), lVar3 != 0)) {
        (*(code *)puVar2)(uVar6,lVar3,param_3,5);
      }
      if (0xe < uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      bVar1 = 1 < param_2;
      param_2 = param_2 >> 1;
    } while (bVar1);
  }
  return;
}

