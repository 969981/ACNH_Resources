
bool FUN_01c79ccc(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  ushort *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  long lVar7;
  ulong uVar8;
  ulong __n;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined7 local_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  byte local_169;
  undefined8 local_168;
  byte local_160 [9];
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 local_138;
  undefined7 uStack_137;
  byte bStack_130;
  undefined2 local_12f;
  undefined5 uStack_12d;
  undefined1 uStack_128;
  undefined1 auStack_118 [216];
  
  if (*(char *)(param_1 + 0x700) == '\0') {
    return false;
  }
  plVar4 = (long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x39;
  if (2 < param_2) {
    plVar4 = (long *)(param_1 + 0x1a8);
  }
  if (((char)plVar4[0x38] != '\0') && (*plVar4 != 0)) {
    plVar1 = plVar4 + 2;
    uStack_128 = 0;
    local_138 = 0;
    uStack_137 = 0;
    bStack_130 = 0;
    local_12f = 0;
    uStack_12d = 0;
    __n = (ulong)*(ushort *)((ulong)plVar1 | 2);
    local_160[0] = 0;
    local_160[1] = 0;
    local_160[2] = 0;
    local_160[3] = 0;
    local_160[4] = 0;
    local_160[5] = 0;
    local_160[6] = 0;
    local_160[7] = 0;
    local_148 = 0;
    uStack_147 = 0;
    uStack_140 = 0;
    uStack_13f = 0;
    local_160[8] = 0;
    uStack_157 = 0;
    uStack_150 = 0;
    uStack_14f = 0;
    if (0x39 < __n) {
      return false;
    }
    memset(local_160 + __n,0,0x39 - __n);
    memcpy(local_160,(void *)((ulong)plVar1 | 4),__n);
    puVar3 = (ushort *)((long)((ulong)plVar1 | 4) + __n);
    uVar8 = (ulong)*puVar3;
    if (0xd5 < uVar8) {
      return false;
    }
    memset(auStack_118 + uVar8,0,0xd5 - uVar8);
    uVar6 = uStack_157;
    plVar2 = (long *)((long)puVar3 + uVar8 + 2);
    lVar7 = (long)plVar2 - (long)plVar1;
    if (plVar2 <= plVar1) {
      lVar7 = (long)plVar1 - (long)plVar2;
    }
    if (plVar4[1] != lVar7) {
      return false;
    }
    if (0xfffffffd < local_160[0] - 4) {
      if (local_160[0] == 3) {
        if (__n == 0x39) {
          local_168 = CONCAT17(uStack_128,CONCAT52(uStack_12d,local_12f));
LAB_01c79e3c:
          uStack_170 = uStack_137;
          local_169 = bStack_130;
          _local_178 = CONCAT17(local_138,uStack_13f);
          local_190 = CONCAT17(uStack_150,uStack_157);
          uVar5 = local_190;
          uStack_180 = CONCAT17(uStack_140,uStack_147);
          local_188 = CONCAT17(local_148,uStack_14f);
          lVar7 = FUN_00a7f6d4(&local_188);
          if (lVar7 == 0) {
            return false;
          }
          if (3 < local_169) {
            return false;
          }
          if (2 < (byte)local_168) {
            return false;
          }
          if (3 < local_168._1_1_) {
            return false;
          }
          local_190._0_4_ = (int)uVar6;
          if ((int)local_190 == 0xa0028) {
            local_190._4_4_ = SUB84(uVar5,4);
            return local_190._4_4_ == 0xa0002;
          }
          return false;
        }
      }
      else if (__n == 0x35) {
        local_168 = (ulong)CONCAT22(local_168._2_2_,local_12f);
        goto LAB_01c79e3c;
      }
    }
  }
  return false;
}

