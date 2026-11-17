
void FUN_03148120(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *__dest;
  uint uVar9;
  undefined1 *puVar10;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  if (((DAT_056fa260 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056fa260), iVar4 != 0)) {
    DAT_056fa200 = PTR_DAT_04bb2020 + 0x10;
    DAT_056fa208 = &DAT_040f3d6d;
    DAT_056fa228 = &DAT_040a7941;
    DAT_056fa218 = &DAT_040c6534;
    DAT_056fa238 = &DAT_04097ee5;
    DAT_056fa248 = &DAT_04097eea;
    DAT_056fa258 = &DAT_0405e43a;
    DAT_056fa210 = DAT_056fa200;
    DAT_056fa220 = DAT_056fa200;
    DAT_056fa230 = DAT_056fa200;
    DAT_056fa240 = DAT_056fa200;
    DAT_056fa250 = DAT_056fa200;
    __cxa_guard_release(&DAT_056fa260);
  }
  iVar4 = *(int *)(param_1 + 0x420);
  iVar3 = *(int *)(param_1 + 0x418);
  if (iVar4 < iVar3) {
    uVar9 = param_2;
    if (5 < param_2) {
      uVar9 = 0;
    }
    iVar2 = *(int *)(param_1 + 0x41c) + iVar4;
    uVar7 = (&DAT_056fa208)[(ulong)uVar9 * 2];
    *(int *)(param_1 + 0x420) = iVar4 + 1;
    iVar4 = 0;
    if (iVar3 <= iVar2) {
      iVar4 = iVar3;
    }
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x410) + (long)(iVar2 - iVar4) * 0x40);
    *puVar8 = &DAT_04b04a68;
    puVar8[1] = param_1;
    *(uint *)(puVar8 + 2) = param_2;
    puVar8[3] = PTR_DAT_04bb2020 + 0x10;
    puVar8[4] = uVar7;
  }
  if ((*(int *)(param_1 + 0x288) != 8) && (*(int *)(param_1 + 0x1b0) != 9)) {
    puVar8 = (undefined8 *)0x0;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    uStack_3a = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_33 = 0;
    local_50 = "ChangeFrame";
    if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x298);
      if (lVar6 == 0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = *(undefined8 **)(lVar6 + 0x18);
        if ((*(byte *)(lVar6 + 8) & 10) != 2) {
          puVar8 = (undefined8 *)0x0;
        }
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bbd398);
    if ((uVar5 & 1) == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    iVar4 = *(int *)(puVar8 + 0x38);
    iVar3 = *(int *)(puVar8 + 0x37);
    if (iVar4 < iVar3) {
      *(int *)(puVar8 + 0x38) = iVar4 + 1;
      if (puVar8[0x36] != 0) {
        iVar4 = *(int *)((long)puVar8 + 0x1bc) + iVar4;
        iVar2 = 0;
        if (iVar3 <= iVar4) {
          iVar2 = iVar3;
        }
        puVar10 = (undefined1 *)(puVar8[0x36] + (long)(iVar4 - iVar2) * 0xb0);
        *puVar10 = uStack_33;
        puVar10[1] = uStack_34;
        *(undefined8 *)(puVar10 + 8) = local_48;
        *(undefined4 *)(puVar10 + 0x10) = local_40;
        *(uint *)(puVar10 + 0x14) = CONCAT22(uStack_3a,local_3c);
        *(undefined4 *)(puVar10 + 0x18) = uStack_38;
        (**(code **)(local_58 + 0x18))(&local_58);
        __dest = *(char **)(puVar10 + 0x20);
        if (__dest != local_50) {
          lVar6 = 0;
          do {
            pcVar1 = local_50 + lVar6;
            lVar6 = lVar6 + 1;
          } while (*pcVar1 != '\0');
          uVar9 = (int)lVar6 - 1;
          if (*(int *)(puVar10 + 0x2c) <= (int)uVar9) {
            uVar9 = *(int *)(puVar10 + 0x2c) - 1;
          }
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          else {
            memcpy(__dest,local_50,(ulong)uVar9);
            __dest = __dest + uVar9;
          }
          *__dest = '\0';
          *(uint *)(puVar10 + 0x28) = uVar9;
        }
      }
    }
  }
  return;
}

