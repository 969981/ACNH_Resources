
undefined8 FUN_02c5d290(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *__src;
  undefined *local_288;
  undefined1 *puStack_280;
  int local_278;
  undefined1 auStack_274 [63];
  undefined1 local_235;
  undefined8 local_230;
  undefined1 *local_228;
  undefined8 ***local_220;
  undefined8 ***pppuStack_218;
  undefined8 ***local_210 [7];
  undefined8 ***local_1d8 [7];
  undefined8 ***local_1a0 [7];
  undefined8 ***local_168 [7];
  undefined8 **local_130 [7];
  undefined8 *local_f8 [7];
  undefined8 local_c0 [7];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [16];
  
  local_c0[0] = 0;
  local_210[0] = local_1d8;
  local_1d8[0] = local_1a0;
  local_1a0[0] = local_168;
  local_168[0] = local_130;
  local_220 = local_210;
  local_130[0] = local_f8;
  local_f8[0] = local_c0;
  local_230 = 0;
  local_228 = (undefined1 *)0x0;
  if (auStack_88 != (undefined1 *)0x0) {
    local_230 = 0x700000000;
    local_228 = auStack_88;
  }
  bVar4 = *(short *)(param_1 + 0x202ac) == 1;
  pppuStack_218 = local_220;
  FUN_03688330(auStack_50,bVar4);
  FUN_03685bc0(&local_230,bVar4);
  if ((param_2 < (int)local_230 + -1) &&
     (uVar5 = FUN_033c0e18(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),param_2,
                           *(undefined8 *)(local_228 + (long)*(int *)(param_1 + 0x202b0) * 8)),
     puVar3 = PTR_PTR_04bb2238, (uVar5 & 1) == 0)) {
    local_235 = 0;
    local_278 = 0x40;
    local_288 = PTR_DAT_04bb2f70 + 0x10;
    puStack_280 = auStack_274;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(undefined1 **)(puVar3 + 8);
    if (auStack_274 != __src) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar7 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar7) == '\0') goto LAB_02c5d41c;
        lVar1 = *(long *)(puVar3 + 8) + lVar7;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_02c5d41c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_02c5d41c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_02c5d41c:
      iVar2 = (int)lVar7;
      if (local_278 <= (int)lVar7) {
        iVar2 = local_278 + -1;
      }
      memcpy(auStack_274,__src,(long)iVar2);
      auStack_274[iVar2] = 0;
    }
    local_288 = PTR_DAT_04bb2bc0 + 0x10;
    FUN_02c5cd08(param_1,1,&local_288);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

