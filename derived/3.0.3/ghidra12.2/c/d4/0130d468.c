
/* WARNING: Removing unreachable block (ram,0x0130d58c) */
/* WARNING: Removing unreachable block (ram,0x0130d560) */
/* WARNING: Removing unreachable block (ram,0x0130d534) */
/* WARNING: Removing unreachable block (ram,0x0130d4f8) */
/* WARNING: Removing unreachable block (ram,0x0130d4cc) */
/* WARNING: Removing unreachable block (ram,0x0130d4a0) */
/* WARNING: Removing unreachable block (ram,0x0130d4ac) */
/* WARNING: Removing unreachable block (ram,0x0130d4d8) */
/* WARNING: Removing unreachable block (ram,0x0130d504) */
/* WARNING: Removing unreachable block (ram,0x0130d540) */
/* WARNING: Removing unreachable block (ram,0x0130d56c) */
/* WARNING: Removing unreachable block (ram,0x0130d59c) */

void FUN_0130d468(undefined4 *param_1,undefined2 *param_2)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  *param_1 = 0xffff;
  *(undefined2 *)((long)param_1 + 6) = 0xffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)param_1 = *param_2;
  *(undefined2 *)((long)param_1 + 2) = param_2[1];
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 6) = param_2[3];
  *(undefined2 *)(param_1 + 2) = param_2[4];
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)(param_2 + 5);
  bVar1 = *(byte *)(param_2 + 6);
  if (5 < bVar1) {
    bVar1 = 4;
  }
  *(byte *)(param_1 + 3) = bVar1;
  return;
}

