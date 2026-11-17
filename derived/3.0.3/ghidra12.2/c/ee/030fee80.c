
void FUN_030fee80(long param_1,uint param_2,ulong param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined *local_130;
  undefined1 *local_128;
  int local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  long local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  uint local_6c;
  
  if (((*(byte *)(param_1 + 0x460) & 1) == 0) || (lVar9 = *(long *)(param_1 + 0x468), lVar9 == 0)) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x18);
    if ((*(byte *)(lVar9 + 8) & 10) != 2) {
      puVar10 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bbd3a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd3a0);
  }
  if ((puVar10 != (undefined8 *)0x0) &&
     (uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bbd398), (uVar8 & 1) != 0)) {
    local_80 = 0;
    uStack_7c = 0;
    uStack_7a = 0;
    local_78 = 0;
    local_74 = 0;
    local_73 = 0;
    local_120 = 0x80;
    local_128 = local_11c;
    local_9d = 0;
    local_98 = PTR_DAT_04bb2020 + 0x10;
    local_11c[0] = 0;
    local_88 = 0;
    local_130 = PTR_DAT_04bb2d88 + 0x10;
    if ((param_3 & 1) == 0) {
      FUN_030ffdf0(&local_130,param_2);
    }
    else {
      local_6c = param_2;
      if ((param_2 & 0xfffffffe) == 0xe) {
        FUN_030ffdf0(&local_130,param_2);
      }
      else {
        iVar7 = 0;
        do {
          if ((&DAT_056f1348)[(long)iVar7 * 6] == local_6c) {
            (**(code **)(local_130 + 0x10))(&local_130,&DAT_056f14c8);
            puVar12 = local_128;
            (**(code **)(local_130 + 0x18))(&local_130);
            lVar9 = 0;
            do {
              if (local_128[lVar9] == '\0') goto LAB_030ff11c;
              if (local_128[lVar9 + 1] == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff11c;
              }
              if (local_128[lVar9 + 2] == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff11c;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff11c:
            uVar13 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
            (**(code **)(DAT_056f14e8 + 0x18))(&DAT_056f14e8);
            lVar9 = 0;
            do {
              if (*(char *)((long)DAT_056f14f0 + lVar9) == '\0') goto LAB_030ff17c;
              if (*(char *)((long)DAT_056f14f0 + lVar9 + 1) == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff17c;
              }
              if (*(char *)((long)DAT_056f14f0 + lVar9 + 2) == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff17c;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff17c:
            uVar5 = (uint)lVar9;
            if ((int)(local_120 - uVar13) <= (int)(uint)lVar9) {
              uVar5 = local_120 + ~uVar13;
            }
            if (0 < (int)uVar5) {
              (**(code **)(DAT_056f14e8 + 0x18))(&DAT_056f14e8);
              memcpy(puVar12 + uVar13,DAT_056f14f0,(ulong)uVar5);
              puVar12[(int)(uVar5 + uVar13)] = 0;
            }
            puVar12 = local_128;
            (**(code **)(local_130 + 0x18))(&local_130);
            lVar9 = 0;
            do {
              if (local_128[lVar9] == '\0') goto LAB_030ff22c;
              if (local_128[lVar9 + 1] == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff22c;
              }
              if (local_128[lVar9 + 2] == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff22c;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff22c:
            uVar13 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
            (**(code **)(DAT_056f14f8 + 0x18))(&DAT_056f14f8);
            lVar9 = 0;
            do {
              if (*(char *)((long)DAT_056f1500 + lVar9) == '\0') goto LAB_030ff28c;
              if (*(char *)((long)DAT_056f1500 + lVar9 + 1) == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff28c;
              }
              if (*(char *)((long)DAT_056f1500 + lVar9 + 2) == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff28c;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff28c:
            uVar5 = (uint)lVar9;
            if ((int)(local_120 - uVar13) <= (int)(uint)lVar9) {
              uVar5 = local_120 + ~uVar13;
            }
            if (0 < (int)uVar5) {
              (**(code **)(DAT_056f14f8 + 0x18))(&DAT_056f14f8);
              memcpy(puVar12 + uVar13,DAT_056f1500,(ulong)uVar5);
              puVar12[(int)(uVar5 + uVar13)] = 0;
            }
            puVar12 = local_128;
            plVar2 = &DAT_056f1350 + (long)iVar7 * 3;
            (**(code **)(local_130 + 0x18))(&local_130);
            lVar9 = 0;
            do {
              if (local_128[lVar9] == '\0') goto LAB_030ff340;
              if (local_128[lVar9 + 1] == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff340;
              }
              if (local_128[lVar9 + 2] == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff340;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff340:
            uVar13 = (uint)lVar9 & ((int)(uint)lVar9 >> 0x1f ^ 0xffffffffU);
            (**(code **)(*plVar2 + 0x18))(plVar2);
            lVar9 = 0;
            lVar11 = (&DAT_056f1358)[(long)iVar7 * 3];
            do {
              if (*(char *)(lVar11 + lVar9) == '\0') goto LAB_030ff3ac;
              lVar3 = lVar11 + lVar9;
              if (*(char *)(lVar3 + 1) == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_030ff3ac;
              }
              if (*(char *)(lVar3 + 2) == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_030ff3ac;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_030ff3ac:
            uVar5 = (uint)lVar9;
            if ((int)(local_120 - uVar13) <= (int)(uint)lVar9) {
              uVar5 = local_120 + ~uVar13;
            }
            if (0 < (int)uVar5) {
              (**(code **)(*plVar2 + 0x18))(plVar2);
              memcpy(puVar12 + uVar13,(void *)(&DAT_056f1358)[(long)iVar7 * 3],(ulong)uVar5);
              puVar12[(int)(uVar5 + uVar13)] = 0;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0x10);
      }
      local_88 = param_1 + 0x490;
    }
    local_90 = local_128;
    iVar7 = *(int *)(puVar10 + 0x38);
    iVar6 = *(int *)(puVar10 + 0x37);
    if (iVar7 < iVar6) {
      *(int *)(puVar10 + 0x38) = iVar7 + 1;
      if (puVar10[0x36] != 0) {
        iVar7 = *(int *)((long)puVar10 + 0x1bc) + iVar7;
        iVar4 = 0;
        if (iVar6 <= iVar7) {
          iVar4 = iVar6;
        }
        puVar14 = (undefined1 *)(puVar10[0x36] + (long)(iVar7 - iVar4) * 0xb0);
        *puVar14 = local_73;
        puVar14[1] = local_74;
        *(long *)(puVar14 + 8) = local_88;
        *(undefined4 *)(puVar14 + 0x10) = local_80;
        *(uint *)(puVar14 + 0x14) = CONCAT22(uStack_7a,uStack_7c);
        *(undefined4 *)(puVar14 + 0x18) = local_78;
        (**(code **)(local_98 + 0x18))(&local_98);
        puVar12 = *(undefined1 **)(puVar14 + 0x20);
        if (puVar12 != local_90) {
          lVar9 = 0;
          do {
            pcVar1 = local_90 + lVar9;
            lVar9 = lVar9 + 1;
          } while (*pcVar1 != '\0');
          uVar13 = (int)lVar9 - 1;
          if (*(int *)(puVar14 + 0x2c) <= (int)uVar13) {
            uVar13 = *(int *)(puVar14 + 0x2c) - 1;
          }
          if ((int)uVar13 < 1) {
            uVar13 = 0;
          }
          else {
            memcpy(puVar12,local_90,(ulong)uVar13);
            puVar12 = puVar12 + uVar13;
          }
          *puVar12 = 0;
          *(uint *)(puVar14 + 0x28) = uVar13;
        }
      }
    }
  }
  return;
}

