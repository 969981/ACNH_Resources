
/* WARNING: Removing unreachable block (ram,0x035af91c) */
/* WARNING: Removing unreachable block (ram,0x035af8d0) */
/* WARNING: Removing unreachable block (ram,0x035af8c0) */
/* WARNING: Removing unreachable block (ram,0x035af8dc) */
/* WARNING: Removing unreachable block (ram,0x035af904) */

undefined8 FUN_035af7e0(int *param_1,int *param_2,int *param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  undefined *local_50;
  char *pcStack_48;
  
  if (((*param_1 == 0 && param_1[2] == 0) && (lVar4 = *(long *)(param_1 + 0x22), lVar4 != 0)) &&
     ((*param_2 != 0 || ((char)param_3[0xe] != '\0')))) {
    param_1[4] = *param_3;
    param_1[5] = param_3[1];
    param_1[6] = param_3[2];
    param_1[7] = param_3[3];
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0xc);
    *(char *)(param_1 + 0x12) = (char)param_3[0xe];
    *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_3 + 0x39);
    *(undefined1 *)((long)param_1 + 0x4a) = *(undefined1 *)((long)param_3 + 0x3a);
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
      plVar1 = (long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x60);
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      if (*plVar1 != 0) {
        FUN_012e4b00(*plVar1,param_1 + 0x16);
        lVar4 = *(long *)(param_1 + 0x22);
      }
      if ((*(long *)PTR_DAT_04bb27c8 != 0) && (lVar4 != 0)) {
        FUN_0096fbc8(lVar4,*(undefined8 *)(*(long *)PTR_DAT_04bb27c8 + 0xa8));
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_04bb3518 + 0x108);
      if (lVar4 != 0) {
        puVar7 = (uint *)(param_1 + 0x2d);
        if (*puVar7 == 0xffffffff) {
          if (*(char *)(*(long *)PTR_DAT_04bb2720 + 0x344) == '\0') {
            local_50 = PTR_DAT_04bb2020 + 0x10;
            pcStack_48 = "WideRoadSearch";
            uVar3 = FUN_03c54e40(lVar4,&local_50,0);
            *puVar7 = uVar3;
            if (uVar3 != 0xffffffff) {
              *(int **)(param_1 + 0x34) = param_1;
              *(undefined1 **)(param_1 + 0x36) = &LAB_035afa50;
              param_1[0x38] = 0;
              param_1[0x39] = 0;
              return 0;
            }
          }
        }
        else {
          lVar5 = *(long *)(lVar4 + 0x38);
          if (lVar5 != lVar4 + 0x30) {
            lVar6 = lVar5 + -0x160;
            while ((uint)*(byte *)(lVar6 + 0x118) != *puVar7) {
              lVar5 = *(long *)(lVar5 + 8);
              lVar6 = lVar5 + -0x160;
              if (lVar6 == lVar4 + -0x130) {
                return 0;
              }
            }
            if (*(int *)(lVar6 + 0xcc) == 1) {
              iVar2 = *param_2;
              param_1[2] = 1;
              *param_1 = iVar2;
              FUN_03c54bd0(lVar4,puVar7,param_1 + 0x2e,0);
              FUN_03c55110(lVar4,param_1[0x2d],1);
              *(undefined1 *)(param_1 + 0x2c) = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

