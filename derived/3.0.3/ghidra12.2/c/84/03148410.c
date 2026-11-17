
void FUN_03148410(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *__dest;
  uint uVar8;
  undefined1 *puVar9;
  undefined *local_68;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  if (param_2 < 0xc) {
    iVar4 = *(int *)(param_1 + 0x420);
    iVar3 = *(int *)(param_1 + 0x418);
    if (iVar4 < iVar3) {
      *(int *)(param_1 + 0x420) = iVar4 + 1;
      iVar4 = *(int *)(param_1 + 0x41c) + iVar4;
      iVar2 = 0;
      if (iVar3 <= iVar4) {
        iVar2 = iVar3;
      }
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x410) + (long)(iVar4 - iVar2) * 0x40);
      *puVar7 = &DAT_04b04a90;
      puVar7[1] = param_1;
      *(uint *)(puVar7 + 2) = param_2;
    }
    if ((*(int *)(param_1 + 0x288) != 8) && (*(int *)(param_1 + 0x1b0) != 9)) {
      puVar7 = (undefined8 *)0x0;
      local_68 = PTR_DAT_04bb2020 + 0x10;
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
      uStack_4a = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      local_60 = "ChangeFilter";
      if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x298);
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar7 = *(undefined8 **)(lVar6 + 0x18);
          if ((*(byte *)(lVar6 + 8) & 10) != 2) {
            puVar7 = (undefined8 *)0x0;
          }
        }
      }
      if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd3a0);
      }
      uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bbd398);
      if ((uVar5 & 1) == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      iVar4 = *(int *)(puVar7 + 0x38);
      iVar3 = *(int *)(puVar7 + 0x37);
      if (iVar4 < iVar3) {
        *(int *)(puVar7 + 0x38) = iVar4 + 1;
        if (puVar7[0x36] != 0) {
          iVar4 = *(int *)((long)puVar7 + 0x1bc) + iVar4;
          iVar2 = 0;
          if (iVar3 <= iVar4) {
            iVar2 = iVar3;
          }
          puVar9 = (undefined1 *)(puVar7[0x36] + (long)(iVar4 - iVar2) * 0xb0);
          *puVar9 = uStack_43;
          puVar9[1] = uStack_44;
          *(undefined8 *)(puVar9 + 8) = local_58;
          *(undefined4 *)(puVar9 + 0x10) = local_50;
          *(uint *)(puVar9 + 0x14) = CONCAT22(uStack_4a,local_4c);
          *(undefined4 *)(puVar9 + 0x18) = uStack_48;
          (**(code **)(local_68 + 0x18))(&local_68);
          __dest = *(char **)(puVar9 + 0x20);
          if (__dest != local_60) {
            lVar6 = 0;
            do {
              pcVar1 = local_60 + lVar6;
              lVar6 = lVar6 + 1;
            } while (*pcVar1 != '\0');
            uVar8 = (int)lVar6 - 1;
            if (*(int *)(puVar9 + 0x2c) <= (int)uVar8) {
              uVar8 = *(int *)(puVar9 + 0x2c) - 1;
            }
            if ((int)uVar8 < 1) {
              uVar8 = 0;
            }
            else {
              memcpy(__dest,local_60,(ulong)uVar8);
              __dest = __dest + uVar8;
            }
            *__dest = '\0';
            *(uint *)(puVar9 + 0x28) = uVar8;
          }
        }
      }
    }
    *(uint *)(param_1 + 0x2c0) = param_2;
  }
  return;
}

