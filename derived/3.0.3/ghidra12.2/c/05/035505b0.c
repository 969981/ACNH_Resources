
/* WARNING: Removing unreachable block (ram,0x03550604) */
/* WARNING: Removing unreachable block (ram,0x03550668) */
/* WARNING: Removing unreachable block (ram,0x03550614) */
/* WARNING: Removing unreachable block (ram,0x03550624) */
/* WARNING: Removing unreachable block (ram,0x03550660) */
/* WARNING: Removing unreachable block (ram,0x03550670) */

void FUN_035505b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint local_4418 [2168];
  undefined1 uStack_2238;
  undefined8 local_2230;
  undefined1 *local_2228;
  long **local_2220;
  long **local_2218;
  long *local_2210 [5];
  long alStack_21e8 [890];
  undefined8 local_618;
  undefined1 auStack_5f0 [1440];
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  local_4418[0] = 0;
  lVar3 = 0xb2;
  local_2220 = local_2210;
  local_2210[0] = alStack_21e8;
  local_2228 = (undefined1 *)0x0;
  local_2230 = 0;
  plVar2 = local_2210[0];
  do {
    lVar3 = lVar3 + -2;
    *plVar2 = (long)(plVar2 + 5);
    plVar2[5] = (long)(plVar2 + 10);
    plVar2 = plVar2 + 10;
  } while (lVar3 != 0);
  local_618 = 0;
  if (auStack_5f0 != (undefined1 *)0x0) {
    local_2230 = 0xb400000000;
    local_2228 = auStack_5f0;
  }
  local_2218 = local_2220;
  FUN_014bcde4(&local_2230,*param_4,param_3,&local_50,0);
  local_4418[0] = *param_4;
  uVar1 = local_4418[0] & 0x1f;
  FUN_014e2eb0(local_4418,&local_2230);
  uStack_2238 = (undefined1)(1 << (ulong)uVar1);
  FUN_014bb000(local_4418);
  return;
}

