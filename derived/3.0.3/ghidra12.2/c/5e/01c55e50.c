
/* WARNING: Removing unreachable block (ram,0x01c560c4) */

void FUN_01c55e50(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  undefined **local_70;
  undefined8 local_68;
  
  uVar6 = (uint)DAT_0534e320;
  uVar1 = DAT_0534e322 + 1;
  uVar7 = (uint)DAT_0534e320;
  if (uVar7 != uVar1) {
    do {
      uVar2 = uVar7 & 0xffff;
      if (((uVar2 - uVar6 < DAT_0534e300) &&
          (puVar8 = *(uint **)(DAT_0534e308 + (long)(int)(uVar2 - uVar6) * 8), puVar8 != (uint *)0x0
          )) || (puVar8 = (uint *)&DAT_0534e628, (DAT_0534e630 & 1) != 0)) {
        if (*puVar8 != 0) goto LAB_01c55f1c;
LAB_01c56024:
        uVar7 = 0;
      }
      else {
        iVar5 = __cxa_guard_acquire(&DAT_0534e630);
        if (iVar5 != 0) {
          DAT_0534e628 = 0;
          __cxa_guard_release(&DAT_0534e630);
        }
        puVar8 = (uint *)&DAT_0534e628;
        if (DAT_0534e628 == 0) goto LAB_01c56024;
LAB_01c55f1c:
        cVar9 = DAT_0534e328;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_0534e328 = '\x01';
            DAT_0534e32c = 0xffffffffffffffff;
            DAT_0534e334 = -1;
            DAT_0534e33c = 0xffffffffffffffff;
            DAT_0534e344 = 0xffffffffffffffff;
            DAT_0534e34c = 0xffffffffffffffff;
            DAT_0534e354 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_0534e334) {
              if ((ushort *)((ulong)DAT_0534e334._4_4_ + (long)puVar8) == (ushort *)0x0)
              goto LAB_01c56024;
              uVar7 = (uint)*(ushort *)((ulong)DAT_0534e334._4_4_ + (long)puVar8);
              goto LAB_01c56028;
            }
            if (DAT_0534e334._4_4_ != 0xffffffff) goto LAB_01c56024;
          }
          puVar12 = (uint *)(ulong)*puVar8;
          uVar7 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_01c56028;
          lVar3 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar8 + (lVar3 - (long)puVar12);
          if (lVar3 == 0) goto LAB_01c56024;
          uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
          DAT_0534e334 = CONCAT44(0xfffffffe,(undefined4)DAT_0534e334);
          uVar7 = 0;
          if (uVar11 == 0) goto LAB_01c56028;
          piVar13 = (int *)(lVar3 + 4);
          while (piVar13[-1] != 0x54706054) {
            piVar13 = piVar13 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              uVar7 = 0;
              goto LAB_01c56028;
            }
          }
          iVar5 = 0;
          if (*piVar13 != -1) {
            iVar5 = *piVar13;
          }
          DAT_0534e334 = CONCAT44(iVar5,(undefined4)DAT_0534e334);
        } while (*puVar8 != 0);
        uVar7 = 0;
      }
LAB_01c56028:
      local_68 = 0;
      local_70 = &PTR_LAB_04a41d68;
      if (uVar7 - DAT_0534e320 < DAT_0534e300) {
        local_68 = *(undefined8 *)(DAT_0534e308 + (long)(int)(uVar7 - DAT_0534e320) * 8);
      }
      (**(code **)*param_1)(param_1,&local_70);
      uVar6 = (uint)DAT_0534e320;
      uVar7 = uVar2;
      uVar10 = uVar2;
      if (uVar2 <= DAT_0534e322) {
        uVar10 = (uint)DAT_0534e322;
      }
      do {
        while( true ) {
          if (uVar10 == uVar7) {
            uVar7 = uVar2 + 1;
            goto LAB_01c55ed4;
          }
          uVar4 = (uVar7 + 1 & 0xffff) - uVar6;
          if (uVar4 < DAT_0534e300) break;
          uVar7 = uVar7 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (*(long *)(DAT_0534e308 + (long)(int)uVar4 * 8) == 0);
LAB_01c55ed4:
    } while ((uint)uVar1 != (uVar7 & 0xffff));
  }
  return;
}

