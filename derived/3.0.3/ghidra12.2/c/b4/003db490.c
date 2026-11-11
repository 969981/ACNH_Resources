
/* WARNING: Removing unreachable block (ram,0x003db53c) */

bool FUN_003db490(long param_1,long param_2,long param_3,int param_4,uint param_5)

{
  undefined2 *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  undefined2 local_140 [120];
  
  uVar8 = -(ulong)(param_5 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_5 << 2;
  (**(code **)(**(long **)(param_1 + 8) + 0x30))
            (*(long **)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x10) + uVar8 * (long)param_4 + 8,0)
  ;
  bVar2 = false;
  if (uVar8 < 0x41) {
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                      (*(long **)(param_1 + 8),local_140,uVar8,0);
    bVar2 = uVar3 == uVar8;
    if (bVar2 && 0 < (int)param_5) {
      if (param_5 == 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        puVar5 = local_140 + 2;
        puVar6 = (undefined2 *)(param_2 + 2);
        puVar7 = (undefined2 *)(param_3 + 2);
        do {
          lVar4 = lVar4 + -2;
          puVar6[-1] = puVar5[-2];
          puVar7[-1] = puVar5[-1];
          *puVar6 = *puVar5;
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 4;
          *puVar7 = *puVar1;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 2;
        } while (-lVar4 != ((ulong)param_5 & 0xfffffffe));
        lVar4 = -lVar4;
        if ((param_5 & 1) == 0) {
          return bVar2;
        }
      }
      *(undefined2 *)(param_2 + lVar4 * 2) = local_140[lVar4 * 2];
      *(undefined2 *)(param_3 + lVar4 * 2) = local_140[lVar4 * 2 + 1];
    }
  }
  return bVar2;
}

