
void FUN_038a3fa0(long param_1)

{
  void *__src;
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  
  if (*(long *)(param_1 + 8) == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(DAT_05ae6a60 + 0x90) + 200);
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      if ((uVar12 < uVar6) &&
         (pbVar13 = *(byte **)(*(long *)(param_1 + 0x18) + uVar12 * 8), *(int *)(pbVar13 + 4) != 0))
      {
        plVar10 = *(long **)(param_1 + 8);
        bVar1 = *pbVar13;
        lVar3 = (**(code **)(*plVar10 + 0x150))(plVar10);
        uVar6 = *pbVar13 - 0xfd;
        if (bVar1 < 0xfd) {
          uVar6 = (uint)*pbVar13;
        }
        lVar4 = (ulong)(0xfc < bVar1) * 4;
        *(uint *)(lVar3 + lVar4) = 1 << (ulong)(uVar6 & 0x1f) | *(uint *)(lVar3 + lVar4);
        (**(code **)(*plVar10 + 0x38))(plVar10,1);
        uVar6 = *(uint *)(param_1 + 0x10);
      }
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)(int)uVar6);
    if (0 < (int)uVar6) {
      uVar12 = 0;
      lVar3 = 8;
      do {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar12 * 8) + 4) == 0) {
          plVar10 = *(long **)(param_1 + 8);
          pbVar13 = *(byte **)(*(long *)(param_1 + 0x18) + uVar12 * 8);
          bVar1 = *pbVar13;
          lVar4 = (**(code **)(*plVar10 + 0x150))(plVar10);
          uVar7 = (uint)*pbVar13;
          uVar6 = uVar7 - 0xfd;
          if (bVar1 < 0xfd) {
            uVar6 = uVar7;
          }
          lVar2 = (ulong)(0xfc < bVar1) * 4;
          *(uint *)(lVar4 + lVar2) =
               *(uint *)(lVar4 + lVar2) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
          piVar5 = (int *)(**(code **)(*plVar10 + 0x150))(plVar10);
          if ((*piVar5 == 0) &&
             (lVar4 = (**(code **)(*plVar10 + 0x150))(plVar10), *(int *)(lVar4 + 4) == 0)) {
            (**(code **)(*plVar10 + 0x38))(plVar10,0);
          }
          iVar11 = (int)uVar12;
          if (iVar11 < *(int *)(param_1 + 0x10)) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar12 * 8);
            *puVar9 = *(undefined8 *)(param_1 + 0x20);
            *(undefined8 **)(param_1 + 0x20) = puVar9;
          }
          if (iVar11 < 0) {
            return;
          }
          iVar8 = *(int *)(param_1 + 0x10);
          if (iVar8 <= iVar11) {
            return;
          }
          if (iVar11 + 1 < iVar8) {
            __src = (void *)(*(long *)(param_1 + 0x18) + lVar3);
            memmove((void *)((long)__src + -8),__src,((long)iVar8 - uVar12) * 8 - 8);
            iVar8 = *(int *)(param_1 + 0x10);
          }
          *(int *)(param_1 + 0x10) = iVar8 + -1;
          return;
        }
        uVar12 = uVar12 + 1;
        lVar3 = lVar3 + 8;
      } while (uVar6 != uVar12);
    }
  }
  return;
}

