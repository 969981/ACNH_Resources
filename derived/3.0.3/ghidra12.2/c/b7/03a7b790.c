
void FUN_03a7b790(long param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  
  if (((*(byte *)(param_1 + 0x324) ^ 0xff) & 7) != 0) {
    uVar4 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar4 = 0;
    }
    if ((*(long *)(*(long *)(param_2 + 0x10) +
                  (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5)) != 0) &&
       (*(int *)(*(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x20 + 0x18) ==
        *(int *)(param_1 + 800))) {
      return;
    }
  }
  if ((int)param_5 < *(int *)(param_1 + 0x31c)) {
    if (*(uint *)(param_2 + 0x18) <= param_4) {
      param_4 = 0;
    }
    uVar1 = *(long *)(*(long *)(param_2 + 0x20) + (long)(int)param_4 * 8) + 0x33;
    uVar17 = uVar1 & 0xffffffffffffffe0;
    uVar10 = uVar17 * (long)(int)param_5;
    if (*(long *)(param_1 + 0x2e0) != 0 || *(long *)(param_1 + 0x2f8) != 0) {
      puVar2 = (uint *)(param_1 + 0x310);
      do {
        uVar4 = *(uint *)(param_1 + 0x310);
        uVar13 = (ulong)uVar4 + 0x1f & 0x1ffffffe0;
        uVar14 = uVar13 + uVar10;
        uVar15 = uVar10;
        if (uVar14 <= (ulong)(long)*(int *)(param_1 + 0x2e8)) {
          uVar15 = uVar14;
        }
        while (uVar4 == *puVar2) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = (uint)uVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar9 = param_1 + 600;
            uVar10 = 0;
            if (uVar14 <= (ulong)(long)*(int *)(param_1 + 0x2e8)) {
              uVar10 = uVar13;
            }
            goto LAB_03a7b8ac;
          }
        }
      } while( true );
    }
    lVar9 = FUN_039011c0(*(undefined8 *)PTR_DAT_04bd1108,uVar10,0x20,1,1);
    uVar10 = 0;
LAB_03a7b8ac:
    uVar4 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar4 = 0;
    }
    *(undefined4 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x20 + 0x18) =
         *(undefined4 *)(param_1 + 800);
    uVar4 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar4 = 0;
    }
    plVar16 = (long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar4 * 0x20);
    *plVar16 = lVar9;
    plVar16[1] = uVar10;
    plVar16[2] = uVar17;
    lVar11 = *(long *)(param_1 + 0x250);
    if (*(uint *)(param_1 + 0x248) <= param_3) {
      param_3 = 0;
    }
    puVar2 = (uint *)(lVar11 + (long)(int)param_3 * 0x88 + 0x80);
    do {
      uVar4 = *puVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = uVar4 + param_5;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar5 = *(uint *)(param_1 + 0x31c);
    plVar16 = (long *)(lVar11 + (long)(int)param_3 * 0x88);
    lVar11 = plVar16[2];
    (**(code **)(*plVar16 + 0x20))(plVar16);
    (**(code **)(*plVar16 + 0x20))(plVar16);
    if (0 < (int)param_5) {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar4 / uVar5;
      }
      lVar12 = (long)(int)(uVar4 - uVar8 * uVar5);
      if (param_5 == 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar15 = uVar10;
        do {
          *(ulong *)(lVar11 + (uVar14 + lVar12) * 8) = uVar15 + *(long *)(lVar9 + 0x70);
          uVar13 = uVar14 | 1;
          lVar3 = uVar17 + uVar15;
          uVar14 = uVar14 + 2;
          uVar15 = uVar15 + (uVar1 * 2 & 0xffffffffffffffc0);
          *(long *)(lVar11 + (uVar13 + lVar12) * 8) = lVar3 + *(long *)(lVar9 + 0x70);
        } while (((ulong)param_5 & 0xfffffffe) != uVar14);
      }
      if ((param_5 & 1) != 0) {
        *(ulong *)(lVar11 + (uVar14 + lVar12) * 8) =
             uVar10 + uVar14 * uVar17 + *(long *)(lVar9 + 0x70);
      }
    }
  }
  return;
}

