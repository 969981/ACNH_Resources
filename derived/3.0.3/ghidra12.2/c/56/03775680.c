
/* WARNING: Removing unreachable block (ram,0x03775774) */
/* WARNING: Removing unreachable block (ram,0x03775860) */

void FUN_03775680(long *param_1,ushort param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_60;
  ushort local_58;
  
  if ((((DAT_05ab8198 != (ushort *)0x0) && ((*DAT_05ab8198 & 1) != 0)) && (DAT_05ab7608 != 0)) &&
     (lVar11 = *(long *)(DAT_05ab7608 + 8), lVar11 != 0)) {
    if ((*(long **)(lVar11 + 0x60) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x60), puVar8 == (undefined8 *)0x0)) {
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
      *param_1 = (long)&PTR_LAB_04942240;
      return;
    }
    uVar9 = (**(code **)*puVar8)();
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)(*(long *)(lVar11 + 0x48) + *(long *)(lVar11 + 0x40) + 2);
    *param_1 = (long)&PTR_LAB_04942240;
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar11 + 0x60) == 0) {
      return;
    }
    puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x60) + 8);
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x03775744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar8)();
    return;
  }
  if (DAT_05574040 != 0) {
    local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar11 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
       lVar11 != 0)) {
      if ((*(long **)(lVar11 + 0x36620) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x36620), puVar8 == (undefined8 *)0x0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)*puVar8)();
        uVar9 = uVar9 & 0xffffffff;
      }
      puVar6 = PTR_DAT_04bb7648;
      local_60 = PTR_DAT_04bb7648 + 0x10;
      local_58 = param_2;
      uVar10 = FUN_029066e0(*(long *)(lVar11 + 0x36608) + *(long *)(lVar11 + 0x36600),&local_60);
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar11 + 0x36620) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x36620) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      if ((uVar10 & 1) != 0) {
        if ((*(long **)(lVar11 + 0x36658) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x36658), puVar8 == (undefined8 *)0x0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)*puVar8)();
          uVar7 = uVar7 ^ 1;
        }
        lVar1 = *(long *)(lVar11 + 0x36640) + *(long *)(lVar11 + 0x36638);
        puVar4 = (undefined2 *)(lVar1 + 0x48b2);
        if ((*(byte *)(lVar1 + 0x48b5) & 1) != 0) {
          puVar4 = (undefined2 *)(lVar1 + 0x48b0);
        }
        uVar5 = *puVar4;
        *param_1 = (long)(puVar6 + 0x10);
        *(undefined2 *)(param_1 + 1) = uVar5;
        if ((uVar7 & 1) != 0) {
          return;
        }
        lVar11 = *(long *)(lVar11 + 0x36658);
        goto joined_r0x03775934;
      }
    }
    if (DAT_05574040 != 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
      if (((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
          (lVar11 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
          param_2 < 500)) && (lVar11 != 0)) {
        lVar11 = lVar11 + (ulong)param_2 * 0x2d48;
        if ((*(long **)(lVar11 + 0x4cc38) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x4cc38), puVar8 == (undefined8 *)0x0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)*puVar8)();
          uVar7 = uVar7 ^ 1;
        }
        uVar9 = FUN_028f41ac(*(long *)(lVar11 + 0x4cc20) + *(long *)(lVar11 + 0x4cc18));
        if ((((uVar7 & 1) == 0) && (*(long *)(lVar11 + 0x4cc38) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x4cc38) + 8), puVar8 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar8)();
        }
        if ((uVar9 & 1) != 0) {
          if ((*(long **)(lVar11 + 0x4cc70) == (long *)0x0) ||
             (puVar8 = (undefined8 *)**(long **)(lVar11 + 0x4cc70), puVar8 == (undefined8 *)0x0)) {
            uVar7 = 1;
          }
          else {
            uVar7 = (**(code **)*puVar8)();
            uVar7 = uVar7 ^ 1;
          }
          puVar2 = (ushort *)(*(long *)(lVar11 + 0x4cc58) + *(long *)(lVar11 + 0x4cc50));
          uVar3 = puVar2[1];
          if (puVar2[2] != 0xffff && (*puVar2 & 1) == 0) {
            uVar3 = puVar2[2];
          }
          *(ushort *)(param_1 + 1) = uVar3;
          *param_1 = (long)&PTR_LAB_04942240;
          if ((uVar7 & 1) != 0) {
            return;
          }
          lVar11 = *(long *)(lVar11 + 0x4cc70);
joined_r0x03775934:
          if (lVar11 == 0) {
            return;
          }
          if (*(undefined8 **)(lVar11 + 8) == (undefined8 *)0x0) {
            return;
          }
          (**(code **)**(undefined8 **)(lVar11 + 8))();
          return;
        }
      }
    }
  }
  *(ushort *)(param_1 + 1) = param_2;
  *param_1 = (long)&PTR_LAB_04942240;
  return;
}

