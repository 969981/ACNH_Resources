
void FUN_01db1970(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  void *__dest;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  uint local_6c;
  byte local_67;
  char local_64 [4];
  
  puVar3 = PTR_DAT_04bc10a8;
  local_67 = 0xff;
  piVar9 = *(int **)(param_1 + 8);
  lVar6 = FUN_01cab720(*(undefined8 *)PTR_DAT_04bc10a8,*param_2);
  if (lVar6 != 0) {
    do {
      FUN_01cab920(*(undefined8 *)puVar3,piVar9,&local_6c,0x19000,*param_2);
      pcVar1 = (char *)(*(long *)(DAT_05358908 + 0xf88) + (ulong)local_67 * 0x20 + 0x28);
      if (7 < local_67) {
        pcVar1 = &DAT_0537bdb8;
      }
      if (3 < local_6c) {
        if (*piVar9 == 1) {
          if (7 < local_6c - 4) {
            uVar8 = piVar9[1];
            if (((((int)uVar8 < (int)*(uint *)PTR_DAT_04bc14a8) &&
                 (uVar8 < *(uint *)PTR_DAT_04bc14a8)) &&
                (uVar2 = piVar9[2], local_6c - 0xc == uVar2)) &&
               ((plVar10 = *(long **)(DAT_05385870 + (long)(int)uVar8 * 8), plVar10 != (long *)0x0
                && (*pcVar1 != -1 && uVar2 != 0)))) {
              local_64[0] = *pcVar1;
              (**(code **)(*plVar10 + 8))(plVar10,local_64,piVar9 + 3);
            }
          }
        }
        else if (((*piVar9 == 0) && (3 < local_6c - 4)) &&
                ((uVar8 = local_6c - 8, 3 < uVar8 && (uVar2 = piVar9[1], uVar2 != 0)))) {
          uVar12 = 1;
          puVar11 = (uint *)(piVar9 + 2);
          do {
            uVar4 = *puVar11;
            if ((*(uint *)PTR_DAT_04bc14b0 <= uVar4 || (int)*(uint *)PTR_DAT_04bc14b0 <= (int)uVar4)
               || (plVar10 = *(long **)(DAT_053814b0 + (long)(int)uVar4 * 8), plVar10 == (long *)0x0
                  )) break;
            uVar4 = (**(code **)*plVar10)(plVar10);
            if (uVar8 - 4 < uVar4) break;
            __dest = (void *)(**(code **)(*plVar10 + 0x10))(plVar10);
            uVar7 = (**(code **)*plVar10)(plVar10);
            memcpy(__dest,puVar11 + 1,uVar7 & 0xffffffff);
            uVar7 = (**(code **)*plVar10)(plVar10);
            iVar5 = (**(code **)*plVar10)(plVar10);
            if (uVar2 <= uVar12) break;
            puVar11 = (uint *)((long)(puVar11 + 1) + (uVar7 & 0xffffffff));
            uVar8 = (uVar8 - 4) - iVar5;
            uVar12 = uVar12 + 1;
          } while (3 < uVar8);
        }
      }
      lVar6 = FUN_01cab720(*(undefined8 *)puVar3,*param_2);
    } while (lVar6 != 0);
  }
  return;
}

